#include "main.h"

/**
 * _strpbrk - search a string
 * Description - a function that searches a string for bytes
 * @s: string
 * @accept: bytes in the string
 * Return: a pointer from s that matches accept, NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int b, c;

	for (b = 0; *(s + b); b++)
	{
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + b) == *(accept + c))
			{
				break;
			}
		}
		if (*(accept + c) != '\0')
		{
			return (s + b);
		}
	}
	return (0);
}
