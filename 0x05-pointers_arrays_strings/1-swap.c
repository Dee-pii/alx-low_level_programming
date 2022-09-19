#include "main.h"

/**
 * swap_int - swap the value of two integers
 * Description - a function that swaps two integers
 * @a: integer value to be swapped
 * @b: integer value to be swapped
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
