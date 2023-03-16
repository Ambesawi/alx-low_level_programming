#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given inde in a doubly linked list
 * @h: head double pointer to the list
 * @idx: index of the node to insert
 * @n: int  to insert
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp_prev, *temp = *h;
	unsigned int i = 0;

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp)
	{
		if (idx == i)
		{
			temp->prev->next = new;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		temp_prev = temp;
		temp = temp->next;
		i++;
	}
	if (!temp && i == idx)
	{
		temp_prev->next = new;
		new->prev = temp_prev;
		return (new);
	}

	free(new);
	return (NULL);
}
