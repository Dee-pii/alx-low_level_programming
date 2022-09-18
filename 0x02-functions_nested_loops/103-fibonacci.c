#include <stdio.h>

/**
 * main - print fibonacci numbers
 * Description - a program that prints the sum of the even-valued terms
 * the terms in the Fibonacci sequence whose values do not exceed 4,000,000
 * Return: 0
*/

int main(void)
{
	int b = 0;
	long c = 1, d = 2, sum = d;

	while (d + c < 4000000)
	{
		d += c;

		if (d % 2 == 0)
			sum += d;
		c = d - c;
		++b;
	}
	printf("%ld\n", sum);
return (0);
}
