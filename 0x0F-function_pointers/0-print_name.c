#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * Description: a function that prints a name
 * @name: name to print
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
