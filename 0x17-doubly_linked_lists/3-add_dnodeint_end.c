#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: head double pointer to the list
 * @n: int data to insert in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}
