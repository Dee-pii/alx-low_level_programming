#include "main.h"

/**
 * rev_string - reverse a string
 * Description - a function that reverses a string
 * @s: string to be reversed
 * Return: void
*/

void rev_string(char *s)
{
	char *beg_char, *end_char, c;
	int b, number;
	int length = 0;

	for (b = 0; s[b]; b++)
	{
		length++;
	}

	number = length;

	beg_char = s;
	end_char = s;

	for (b = 0; b < number - 1; b++)
	{
		end_char++;
	}

	for (b = 0; b < number / 2; b++)
	{
		c = *end_char;
		*end_char = *beg_char;
		*beg_char = c;

		beg_char++;
		end_char--;
	}
}
