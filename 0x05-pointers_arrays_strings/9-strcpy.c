#include "main.h"

/**
 * *_strcpy - copy the string
 * Description - a function that copies the string
 * @dest: value of destination
 * @src: value of source
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
