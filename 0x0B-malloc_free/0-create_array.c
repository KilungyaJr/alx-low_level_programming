#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: rcharacter to initialize the array
 *
 * Return: pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
