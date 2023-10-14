#include "lists.h"

/**
 * add_dnodeint - Adds new nodes at the start of a dlistint_t list.
 *
 * @head: Pointer to head node.
 *
 * @n: number
 *
 * Return: pointer to new node
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
