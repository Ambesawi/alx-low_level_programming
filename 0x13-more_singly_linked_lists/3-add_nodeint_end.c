#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * @head: A pointer to the address of the
 * @n: The integer for the new node to contain.
 * Return: the address of the new element,
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	return (NULL);
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
