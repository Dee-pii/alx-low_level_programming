#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * Description: a function that prints strings
 * @separator: string to be printed.
 * @n: number of strings.
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varilist;
	unsigned int d;
	char *str;

	va_start(varilist, n);

	for (d = 0; d < n; d++)
	{
		str = va_arg(varilist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (d < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(varilist);
}
