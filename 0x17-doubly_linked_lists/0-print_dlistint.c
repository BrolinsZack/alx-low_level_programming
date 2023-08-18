#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to head node.
 *
 * Return: the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
