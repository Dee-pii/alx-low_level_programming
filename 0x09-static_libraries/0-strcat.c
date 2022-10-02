#include "main.h"

/**
 * _strcat - concatenate two strings
 * Description - a function that concatenates two strings
 * @dest: pointer destination that will be changed
 * @src: pointer source that will be changed
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int b = 0;
	int c = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	while (src[c] != '\0')
	{
		dest[b] = src[c];
		c++;
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
