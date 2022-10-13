#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * Description: a function that prints
 * @format: a list of types of arguments.
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list varilist;
	unsigned int d = 0, e, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(varilist, format);
	while (format && format[d])
	{
		e = 0;
		while (t_arg[e])
		{
			if (format[d] == t_arg[e] && c)
			{
				printf(", ");
				break;
			} e++;
		}
		switch (format[d])
		{
		case 'c':
			printf("%c", va_arg(varilist, int)), c = 1;
			break;
		case 'd':
			printf("%d", va_arg(varilist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(varilist, double)), c = 1;
			break;
		case 's':
			str = va_arg(varilist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} d++;
	}
	printf("\n"), va_end(varilist);
}
