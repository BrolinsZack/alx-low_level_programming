#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: dlist head.
 *
 * @index: index of node to return.
 *
 * Return: nth node or null.
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int a = 0;

	if (!head)
		return (NULL);

	while (a < index && node)
	{
		node = node->next;
		a++;
	}

	if (!node)
		return (NULL);

	return (node);
}
