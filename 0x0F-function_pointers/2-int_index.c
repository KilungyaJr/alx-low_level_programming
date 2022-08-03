#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array in consideration
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (i++ < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
