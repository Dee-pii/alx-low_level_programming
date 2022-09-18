#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * Description - a function checks for alphabetic character
 * Return 1 if c is a letter. lowercase or uppercase
 * @c: contains the value to be compared
 * Return: 0
*/

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	/* Returns 1 if c is a letter, lowercase or uppercase */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
