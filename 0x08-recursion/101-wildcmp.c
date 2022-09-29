#include "main.h"

/**
 * wildcmp - compare two strings
 * Description - a function that compares two strings
 * @string1: first string
 * @string2: second string
 * Return: 1 if strings can be considered identical, else 0
*/

int wildcmp(char *string1, char *string2)
{
	if (*string2 == '\0' && *string1 == '\0')
	{
		return (1);
	}
	else if (*string2 == '*' && *(string2 + 1) != '\0' && *string1 == '\0')
	{
		return (0);
	}
	if (*string1 == *string2)
	{
		return (wildcmp(string1 + 1, string2 + 1));
	}
	if (*string2 == '*')
	{
		return (wildcmp(string1, string2 + 1) || wildcmp(string1 + 1, string2));
	}
return (0);
}
