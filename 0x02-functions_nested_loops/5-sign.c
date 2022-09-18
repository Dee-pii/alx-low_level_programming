#include "main.h"

/**
 * print_sign - print the sign
 * Description - a function that prints the sign of a number
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 * @n: contains the value to be compared
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar ('0');
		return (0);
	}
	else
	{
	_putchar ('-');
		return (-1);
	}
}
