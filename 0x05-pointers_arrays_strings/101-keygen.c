#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate password
 * Description - a program that generates a password
 * password must be valid and random
 * Return: 0
*/

int main(void)
{
	int password[100];
	int b;
	int d;
	int c = 0;

	srand(time(NULL));

	for  (b = 0; b < 100; b++)
	{
		password[b] = rand() % 78;
			c += (password[b] + '0');
		putchar(password[b] + '0');

		if ((2772 - c) - '0' < 78)
		{
			d = 2772 - c - '0';
			c += d;
			putchar(d + '0');
			break;
		}
	}
	return (0);
}
