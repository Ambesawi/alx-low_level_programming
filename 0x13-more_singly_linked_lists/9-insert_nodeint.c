#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * @n: integer element.
 * Return: the address of the new node, or NULL if it
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
