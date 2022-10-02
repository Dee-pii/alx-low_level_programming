#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * Description - a function that gets the length of a prefix substring
 * @s: intial segment
 * @accept: contains the characters for s
 * Return: bytes that make up the length
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b, c;

	for (c = 0; *(s + c); c++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + c) == *(accept + b))
				break;
		}
		if (*(accept + b) == '\0')
			break;
	}
	return (c);
}
