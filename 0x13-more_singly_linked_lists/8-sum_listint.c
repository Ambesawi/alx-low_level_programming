#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * @head: head of a list.
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
