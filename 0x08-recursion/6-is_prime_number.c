#include "main.h"

/**
 * _comp - computes the prime no in the function
 * Description - a function that computes the prime no function
 * @n: int
 * @r: int to repeat
 * Return: 1 or 0
*/

int _comp(int n, int r)
{
	if (r == n - 1)
	{
		return (1);
	}
	else if (n % r != 0)
	{
		return (_comp(n, r + 1));
	}
	else if (n % r == 0)
	{
		return (0);
	}
	return (0);
}

/**
 * is_prime_number - eval the input integer
 * Description - a function that evaluates the input integer
 * @n: int, input int
 * Return: 1 if input int is a prime no or return 0
*/

int is_prime_number(int n)
{
	int r = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_comp(n, r));
}
