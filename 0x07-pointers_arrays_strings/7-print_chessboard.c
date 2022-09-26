#include "main.h"

/**
 * print_chessboard - print the chessboard
 * Description - a function that prints the chessboard
 * @a: array of chessboard char
 * Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b <= 7; b++)
	{
		for (c = 0; c <= 7; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
