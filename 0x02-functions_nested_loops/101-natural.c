#include <stdio.h>

/**
 * main - list the natural numbers
 * Description - a program that prints the sum of multiples
 * multiples are of 3 or 5, below 1024
 * Return: 0
*/

int main(void)
{
	int b, c, d, cv, dv;

	b = 0;
	for (c = 0; c <= (1024 / 3); c++)
	{
	cv = 3 * c;
	b = b + cv;
	}
	for (d = 0; d <= (1024 / 5); d++)
	{
		if (!(d % 3 == 0))
		{
		dv = 5 * d;
		b = b + dv;
		}
	}
	printf("%i\n", b);
	return (0);
}
