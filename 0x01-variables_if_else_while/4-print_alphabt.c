#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet
 * * Description - prints the alphabet in lowercase
 * Return: 0
*/
int main(void)
{
	char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
}
putchar('\n');
return (0);
}
