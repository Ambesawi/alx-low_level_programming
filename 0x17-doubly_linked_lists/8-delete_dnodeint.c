#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 *    in a doubly linked list at a given index
 * @head: head double pointer to the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	while (temp && i != index)
	{
		i++;
		temp = temp->next;
	}

	if (!temp)
		return (-1);
	else if (temp == *head)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
	}
	else if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}

	return (1);
}
