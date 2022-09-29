#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of dlistint_t list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node, NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for ( ; index > 0 && head->next; index--)
		head = head->next;
	return (index > 0 ? NULL : head);
}
