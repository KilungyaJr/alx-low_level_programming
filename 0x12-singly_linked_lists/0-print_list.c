#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
