#include "main.h"

/**
 * print_alphabet_x10 - print alphabets
 * Description - a function that prints 10 times the alphabet
 * Return: void, nothing
*/

void print_alphabet_x10(void)
{
	char b;
	int d = 1;

	while (d <= 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}

		_putchar('\n');
		d++;
	}
}
