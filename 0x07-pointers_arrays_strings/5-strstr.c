#include "main.h"

/**
 * _strstr - locate a substring
 * Description - a function that locates a substring
 * @needle: substring, look for first occurrence
 * @haystack: string
 * terminating null bytes, not compared
 * Return: a pointer to the beg of substring, NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *str_1;
	char *str_2;

	while (*haystack != '\0')
	{
		str_1 = haystack;
		str_2 = needle;

	while (*haystack != '\0' && *str_2 != '\0' && *haystack == *str_2)
	{
		haystack++;
		str_2++;
	}
	if (*str_2 == '\0')
		return (str_1);
	haystack = str_1 + 1;
	}
	return (0);
}
