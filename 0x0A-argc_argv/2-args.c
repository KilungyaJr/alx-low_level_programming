#include "main.h"
#include <stdio.h>

/**
 * main - prints out all of the arguments passed to it
 * @argc: arguments count
 * @argv: arguments vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
