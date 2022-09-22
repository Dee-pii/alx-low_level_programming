#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * Description - a function that changes all lowercase to uppercase
 * @string: string to be changed
 * Return: the uppercase char of the string
*/

char *string_toupper(char *string)
{
	int b;

	for (b = 0; string[b] != '\0'; b++)
	{
		if (string[b] >= 'a' && string[b] <= 'z')
		{
			string[b] = string[b] - 32;
		}
	}
	return (string);
}
