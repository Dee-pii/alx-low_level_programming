#include "main.h"

/**
 * _puts - print a string
 * Description - a function that prints a string
 * @str: string to print
 * Return: void
*/

void _puts(char *str)
{
	char *b;
	int c;

	b = str;

	for (c = 0; b[c]; c++)
	{
		_putchar (b[c]);
	}
	_putchar('\n');
}
