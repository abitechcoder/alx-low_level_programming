#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments in argv array
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
