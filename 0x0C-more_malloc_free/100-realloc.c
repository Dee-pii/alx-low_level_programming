#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc
 * Description: a function that reallocates a memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int d;

	if (ptr != NULL)
	clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (d = 0; d < (old_size || d < new_size); d++)
	{
		*(relloc + d) = clone[d];
	}
	free(ptr);
return (relloc);
}
