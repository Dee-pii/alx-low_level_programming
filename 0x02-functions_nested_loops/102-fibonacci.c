#include <stdio.h>

/**
 * main - print fibonacci numbers
 * Description - print the first 50 fibonacci numbers
 * Return: 0
*/

int main(void)
{
	int b = 0;
	long c = 1, d = 2;

	while (b < 50)
	{
		if (b == 0)
			printf("%ld", c);
		else if (b == 1)
			printf(", %ld", d);
		else
		{
			d += c;
			c = d - c;
			printf(", %ld", d);
		}
		++b;
	}
	printf("\n");
return (0);
}
