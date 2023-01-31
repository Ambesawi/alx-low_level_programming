#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: A pointer to the address of the
 * @n: The integer for the new node to contain.
 * Return: the address of the new element,
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
