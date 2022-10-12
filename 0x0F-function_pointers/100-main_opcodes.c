#include <stdio.h>
#include <stdlib.h>
/**
 * main - function which prints opcode of the main function
 * Description: a program that prints the opcodes
 * @argc: arguments' length
 * @argv: contains arguments
 * Return: 0
 */

int main(int argc, char **argv)

{
	int d;
		if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (d < atoi(argv[1]) - 1)
	{
		printf("%02hhx ", ((char *) main)[d]);
		d++;
	}
	printf("%02hhx\n", ((char *) main)[d]);
	return (0);
}
