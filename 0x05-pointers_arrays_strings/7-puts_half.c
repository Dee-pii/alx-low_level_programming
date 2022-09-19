#include "main.h"

/**
 * puts_half - prints string
 * Description - prints half of a string
 * @str: string to be printed
 * Return: void
*/

void puts_half(char *str)
{
	int b, second_half;

	b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	second_half = (b + 1) / 2;

	for (b = second_half; str[b]; b++)
	{
		_putchar (str[b]);
	}
	_putchar ('\n');
}
