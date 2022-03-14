#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 for success
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			if (num2 != num1 && num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 == 56 && num2 == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
