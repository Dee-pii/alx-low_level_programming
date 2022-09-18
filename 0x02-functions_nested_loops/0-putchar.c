#include "main.h"

/**
 * main - print _putchar
 * Description - program that prints _putchar
 * Return: 0
*/

int main(void)

{
	char p[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(p[a]);
	}
		_putchar('\n');

return (0);
}
