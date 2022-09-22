#include "main.h"

/**
 * print_number - print an integer
 * Description - a function that prints an integer
 * @n: int to be printed
 * Return: void
*/

void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	else
	{
		b = n;
	}
	if (b / 10)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}
