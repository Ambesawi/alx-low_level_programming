#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to the address of the
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
