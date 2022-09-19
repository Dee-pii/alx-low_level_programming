#include "main.h"

/**
 * _strlen - return length
 * Description - a function that returns length of a string
 * @s: string to be counted
 * Return: length
*/

int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
	b++;
	}
return (b);
}
