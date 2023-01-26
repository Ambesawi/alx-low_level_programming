#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: list.
 * Return: number of elements in list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
