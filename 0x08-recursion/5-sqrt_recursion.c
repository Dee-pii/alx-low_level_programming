#include "main.h"

/**
 * _comp - computes square root
 * Description - a function that computes sq root
 * @first: inital number
 * @last: last number
 * @n: int given
 * Return: 1 if not found sqrroot, else sqrroot
*/

int _comp(int first, int last, int n)
{
	long num;

	if (last >= first)
	{

		num = first + (last - first) / 2;

		if (num * num == n)

			return (num);

		else if (num * num > n)
			return (_comp(first, num - 1, n));

		else if (num * num < n)
			return (_comp(num + 1, last, n));
		}
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural sq root
 * @n: int given
 * Return: square root of n or -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (_comp(2, n, n));
}
