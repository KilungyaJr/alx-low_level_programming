#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	i = j = len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	p = (char *)malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, bufferlen++)
			p[bufferlen] = av[i][j];
		p[bufferlen] = '\n';
		bufferlen++;
	}
	p[bufferlen] = '\0';
	return (p);
}
