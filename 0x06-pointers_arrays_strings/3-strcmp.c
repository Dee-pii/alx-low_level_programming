#include "main.h"

/**
 * _strcmp - compare two strings
 * Description - a function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * break when or if s1 or s2 is empty
 * Return: string 1 and string 2
*/

int _strcmp(char *s1, char *s2)
{
	int d = 0;

	while (d == 0)
	{
		d = *s1 - *s2;

		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (d);
}
