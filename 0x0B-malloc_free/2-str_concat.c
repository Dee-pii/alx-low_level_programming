#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * Description: a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/

char *str_concat(char *s1, char *s2)

{
	char *strDup;
	int c, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c = b = 0;
	while (s1[c] != '\0')
		c++;
	while (s2[b] != '\0')
		b++;
	strDup = malloc(sizeof(char) * (c + b + 1));
	if (strDup == NULL)
		return (NULL);
	c = b = 0;
	while (s1[c] != '\0')
	{
		strDup[c] = s1[c];
		c++;
	}
	while (s2[b] != '\0')
	{
		strDup[c] = s2[b];
		c++, b++;
	}
	strDup[c] = '\0';
	return (strDup);
}
