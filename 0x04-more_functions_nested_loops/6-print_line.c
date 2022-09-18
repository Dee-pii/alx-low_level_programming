#include "main.h"

/**
 * print_line - draws a line
 * Description - a function that draws a straght line
 * @n: the int to be printed
 * Return: 0
*/

void print_line(int n)
{
	int b;

	if (n > 0)
	{
	for (b = 0; b < n; b++)
	{
	_putchar (95);
	}
	_putchar ('\n');
	}

	else
	{
	_putchar ('\n');
	}
}
