#include "main.h"

/**
 * puts2 - prints characters of a string
 * Description - a function that prints every other character
 * @str: string to be printed
 * Return: void
*/

void puts2(char *str)
{
	int b;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (b = 0; b < c; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
