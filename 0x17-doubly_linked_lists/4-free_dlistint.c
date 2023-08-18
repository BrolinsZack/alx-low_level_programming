#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to head of the list.
 *
 * Return: Void.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return; void

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
