#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments in argv array
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int product = 1;
		int i;

		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
		return (0);
	}
	printf("Error\n");
	return (0);
}
