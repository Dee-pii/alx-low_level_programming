#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * Description: a function that returns the sum
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varilist;
	unsigned int d;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(varilist, n);

	for (d = 0; d < n; d++)
		sum += va_arg(varilist, int);

	va_end(varilist);

	return (sum);
}
