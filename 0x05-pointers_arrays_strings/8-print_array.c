#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * Description - print elements of an array of integers
 * @a: the int that will be changed
 * @n: the return value
 * Return: void
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
