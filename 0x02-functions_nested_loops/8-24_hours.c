#include "main.h"

/**
 * jack_bauer - print every minute
 * Description - a function that prints every minute of the day
 * Return: starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int b, c;

	b = 0;
	while (b < 24)
	{
	c = 0;
	while (c < 60)
	{
		_putchar ((b / 10) + '0');
		_putchar ((b % 10) + '0');
		_putchar (':');
		_putchar ((c / 10) + '0');
		_putchar ((c % 10) + '0');
		_putchar ('\n');
		c++;
	}
	b++;
	}
}
