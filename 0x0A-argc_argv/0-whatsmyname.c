#include "main.h"
#include <stdio.h>

/**
 * main - prints program's name, followed by a new line
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
