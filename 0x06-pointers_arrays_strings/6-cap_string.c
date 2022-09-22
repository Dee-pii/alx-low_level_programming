#include "main.h"

/**
 * cap_string - capitalize all words
 * Description - a function that capitalizes all words of a string
 * @s: string to modify
 * Return: char of the string
*/

char *cap_string(char *s)
{
	int b, c;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (b = 0; s[b] != '\0'; b++)
	{
		if (b == 0 && s[b] >= 'a' && s[b] <= 'z')
			s[b] -= 32;
		for (c = 0; c < 13; c++)
		{
			if (s[b] == sep[c])
			{
				if (s[b + 1] >= 'a' && s[b + 1] <= 'z')
				{
					s[b + 1] -= 32;
				}
			}
		}
	}
return (s);
}
