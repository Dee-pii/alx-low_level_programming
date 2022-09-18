#include "main.h"

/**
 * print_square - print a square
 * Description - a function that prints a square
 * @size: is the size of the square
 * if size is 0 or less, print only a new line
 * use # to print the square
 * Return: 0
*/

void print_square(int size)
{
	int b, c;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
