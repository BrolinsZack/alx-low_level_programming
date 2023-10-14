#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list.
 *
 *
 * @head: head of dlistint.
 *
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h;

	if (!head)
		return (sum);

	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
