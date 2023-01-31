#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * @n: integer element.
 * Return: the address of the new node, or NULL if it
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr, *prev, *temp;
	unsigned int i = 0;

	if (!(*head) && idx != 0)
		return (NULL);

	curr = *head;
	prev = curr;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (new);
	}

	while (curr)
	{
		temp = curr;

		if (i == idx)
		{
			new->next = curr;
			prev->next = new;
			return (new);
		}
		curr = curr->next;
		prev = temp;
		i++;
	}

	return (NULL);
}
