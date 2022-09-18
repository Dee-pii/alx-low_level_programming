#include <stdio.h>

/**
 * main - prints combinations
 * Description - prints all possible combinations of two two-digit number
 * Return: 0
*/

int main(void)
{
int a;
int b;

for (a = 0; a < 100; a++)
{
for (b = a + 1; b < 100; b++)
{

putchar (a / 10 + '0');
putchar (a % 10 + '0');

putchar (' ');

putchar (b / 10 + '0');
putchar (b % 10 + '0');

if (a == 98 && b == 99)
{
	break;
}

putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
