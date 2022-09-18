#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description - a function that prints the alphabet in lowercase
 * Return: void,nothing
*/

void print_alphabet(void)
{
char b;
b = 'a';
while (b <= 'z')
{
	_putchar(b);
	b++;
}

_putchar('\n');
}
