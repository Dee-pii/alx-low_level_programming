#include "main.h"

/**
 * times_table - print times table
 * Description - a function that prints the 9 times table
 * Return: 0
*/

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
		c = a * b;
	if ((c / 10) == 0)
	{
	if (b == 0)
	{
		_putchar ('0');
	}
	if (b != 0)
	{
		_putchar (' ');
		_putchar ((c % 10) + '0');
	}
	if (b < 9)
	{
		_putchar (',');
		_putchar (' ');
	}
	}
	else
	{
	_putchar ((c / 10) + '0');
	_putchar ((c % 10) + '0');
	if (b < 9)
	{
		_putchar(',');
		_putchar (' ');
	}
	}
	}
_putchar ('\n');
}
}
