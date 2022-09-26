#include "main.h"

/**
 * set_string - sets the value
 * Description - a function that sets the value of a pointer to char
 * @s: copied content
 * @to: string
 * Return: void, 0
*/

void set_string(char **s, char *to)
{
	*s = to;
}
