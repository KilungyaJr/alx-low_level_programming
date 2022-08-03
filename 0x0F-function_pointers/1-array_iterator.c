#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to be executed
 * @size: size of the array
 * @action: a pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
