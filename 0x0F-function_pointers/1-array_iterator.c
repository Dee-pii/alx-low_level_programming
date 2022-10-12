#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function on array
 * Description: a function that executes a function
 * @array: pointer to array
 * @size:no of elements
 * @action: ptr to function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int d;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (d = 0; d < size; d++)
			action(array[d]);
	}
}
