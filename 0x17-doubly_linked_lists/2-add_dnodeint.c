#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of dlistint_t list
 * @n: value to add to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
