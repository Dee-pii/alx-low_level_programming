#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * Description: a function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: ptr to the function to be used to compare values
 * Return: return index where match is found or -1 if fails
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array && cmp && size > 0)
		for (d = 0; d < size; d++)
			if (cmp(array[d]))
				return (d);
	return (-1);
}
