#include <stdlib.h>
#include <stdio.h>

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

	char *arr;
	int i;

	arr = (char *)&main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
