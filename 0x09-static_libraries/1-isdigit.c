#include "main.h"

/**
 * _isdigit - check for digit
 * Description - a function that checks for a digit
 * Return 1 of c is a digit
 * @c: is the value to be compared
 * Return: 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
