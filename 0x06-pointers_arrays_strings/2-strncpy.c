#include "main.h"

/**
 * _strncpy - copy a string
 * Description - a function that copies a string
 * @dest: a pointer destination that will be changed
 * @src: pointer source that will be changed
 * @n: the int that will be changed
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
