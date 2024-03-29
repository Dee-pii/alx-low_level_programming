#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * Description: a function that allocates memory
 * @b: size
 * Return: pointer
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
