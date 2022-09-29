#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
