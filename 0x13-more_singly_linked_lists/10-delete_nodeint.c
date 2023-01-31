#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a list.
 * @index: index of the list where the node is
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev, *temp;
	unsigned int i = 0;

	curr = *head;
	prev = curr;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (curr)
	{
		temp = curr;

		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		curr = curr->next;
		prev = temp;
		i++;
	}

	return (-1);
}
