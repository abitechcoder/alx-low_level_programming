#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments in argv array
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
