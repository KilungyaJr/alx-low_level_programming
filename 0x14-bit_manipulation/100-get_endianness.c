#include "main.h">

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
