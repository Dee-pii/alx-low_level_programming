#include <stdio.h>
/**
 * main - print arguments received
 * Description: a program that prints all arguments it receives
 * @argc: length of the arguments
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
int j;

for (j = 0; j < argc; j++)
{
	printf("%s\n", *argv);
	argv++;
}
return (0);
}
