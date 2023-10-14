#include "lists.h"

/**
 * add_dnodeint_end - Funcction that adds a new node at the end of a dlistint_t list.
 *
 * @head: Linked list head.
 *
 * @n: Number to insert.
 *
 * Return: New Node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;

	if (!(*head))
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		h = *head;
		while (h->next)
			h = h->next;

		new_node->next = NULL;
		new_node->prev = h;
		h->next = new_node;
	}

	return (new_node);
}
