#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * Description: a function that allocates memory
 * @b: size
 * Return: pointer
 **/

void *malloc_checked(unsigned int b)

{
	void *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	return (d);
}
