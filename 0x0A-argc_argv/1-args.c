#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: arguments count
 * @argv: arguments vectors
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
