#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * Description: a function that creates an array
 * @min: minimum value of array
 * @max: max value
 * Return: the pointer to the array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *ptr, d;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (!ptr)
		return (NULL);

	for (d = 0; (min + d) <= max; d++)
		ptr[d] = (min + d);

	return (ptr);
}
