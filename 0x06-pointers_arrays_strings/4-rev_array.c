#include "main.h"

/**
 * reverse_array - reverse the array
 * Description - a function that reverses the array of integers
 * @a: array to be reversed
 * @n: number of elements
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int *s_c, *e_c, c;
	int b;

	s_c = a;
	e_c = a;

	for (b = 0; b < n - 1; b++)
	{
		e_c++;
	}

	for (b = 0; b < n / 2; b++)
	{
		c = *e_c;
		*e_c = *s_c;
		*s_c = c;

		s_c++;
		e_c--;
	}
}
