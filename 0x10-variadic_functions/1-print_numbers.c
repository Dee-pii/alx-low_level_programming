#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * Description: a function that prints numbers
 * @separator: string to be printed.
 * @n: number of integers.
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varilist;
	unsigned int d;

	va_start(varilist, d);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(varilist, int));
		if (separator && d < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(varilist);
}
