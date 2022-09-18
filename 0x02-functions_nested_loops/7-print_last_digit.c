#include "main.h"

/**
 * print_last_digit - print last digit
 * Description - a function that prints the last digit of a number
 * @n: The int to print
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;
	b = n % 10;

	if (b < 0)
		b = -b;
	_putchar(b + '0');
return (b);
}
