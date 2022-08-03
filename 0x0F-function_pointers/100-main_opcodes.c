#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes -prints opcodes of its program
 * @p: pointer to the main funtion
 * @bytes: number of bytes to print
 */
void print_opcodes(char *p, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", p[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: arguments count
 * @argv: pointer to array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, bytes);
	return (0);
}
