#include "main.h"

/**
 * _islower - check for character
 * Description - checks for lowercase character
 * @c: contains value to be compared
 * Return: 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
