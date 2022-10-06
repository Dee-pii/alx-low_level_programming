#include <stdlib.h>
/**
 * *_calloc - call
 * Description: a function that allocates memory for an array
 * @nmemb: n
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int d;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (d = 0; d < nmemb * size; d++)
		*(memory + d) = 0;
	return ((void *)memory);
}
