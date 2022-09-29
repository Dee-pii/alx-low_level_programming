#include "main.h"

/**
 * _strlen_recursion - finds the length
 * Description - a function that finds the length of a string
 * @s: string
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}

/**
 * _palin_rec - compares the characters of the string
 * Description - a function that compares the characters of a string
 * @s: string
 * @p: position
 * Return: 1 if equal, else 0
*/

int _palin_rec(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}
	if (*s == *(s + p))
	{
		return (_palin_rec(s + 1, p - 2));
	}
	return (0);
}

/**
 * is_palindrome - check if the string is a palindrome
 * Description - a function that checks if a string is a palindrome
 * a palindrome is an empty string
 * @s: string
 * Return: if string is palindrome
*/

int is_palindrome(char *s)
{
	int str_length;

	str_length = _strlen_recursion(s);

	return (_palin_rec(s, str_length - 1));
}
