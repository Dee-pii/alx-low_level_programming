#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to the new space in memory or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *strDup;
	int d;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	d = 0;
	while (s1[d] != '\0')
		d++;
	strDup = malloc(sizeof(char) * (d + n + 1));
	if (strDup == NULL)
		return (NULL);
	d = j = 0;
	while (s1[d] != '\0')
	{
		strDup[d] = s1[d];
		d++;
	}
	while (j < n && s2[j] != '\0')
	{
		strDup[d] = s2[j];
		d++, j++;
	}
	strDup[d] = '\0';
	return (strDup);
}
