#include "main.h"

/**
 * _memcpy - copy a memory area
 * Description - a function that copies a memory area
 * @n: bytes copied
 * @src: memory area copied from
 * @dest: memory area copied to
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int c = 0;

	while (n > 0)
	{
		dest[b] = src[b];
		b++;
		c++;
		n--;
	}
	return (dest);
}
