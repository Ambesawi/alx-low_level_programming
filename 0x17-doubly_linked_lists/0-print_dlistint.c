#include "lists.h"

/**
 * print_dlistint - prints all elements of doubly linked list
 * @h: head pointer to the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
