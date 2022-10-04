#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * Description: a function that creates an array of chars
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int b;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	b = 0;
	while (b < size)
	{
		str[b] = c;
		b++;
	}
	return (str);
}
