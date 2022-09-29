#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * Description - a function that prints a string in reverse
 * @s: string printed in reverse
 * Return: void, 0
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
