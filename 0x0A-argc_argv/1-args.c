#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments in argv array
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
	{
		int sum = 0;
		int i;

		for (i = 1; i < argc; i++)
		{
			sum += 1;
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("%d\n", 0);
	return (0);
}
