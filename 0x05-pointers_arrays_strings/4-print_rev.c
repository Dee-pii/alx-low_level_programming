#include "main.h"

/**
 * print_rev - print a string
 * Description - prints a string in reverse
 * @s: string that will be printed
 * Return: void
*/

void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	for (b = b - 1; b >= 0; b--)
	{
		_putchar (s[b]);
	}
	_putchar ('\n');
}
