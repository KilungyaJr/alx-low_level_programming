#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
 * @n: value to add to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
