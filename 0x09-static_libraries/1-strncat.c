#include "main.h"

/**
 * _strncat - concatenate two strings
 * Description - a function that concatenates two strings
 * @dest: a pointer destination that will be changed
 * @src: pointer source that will be changed
 * @n: the int that will be changes
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int b = 0;
	int c = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[c] != '\0' && c < n)
	{
		dest[b] = src[c];
		b++;
		c++;
	}
	dest[b] = '\0';

	return (dest);
}
