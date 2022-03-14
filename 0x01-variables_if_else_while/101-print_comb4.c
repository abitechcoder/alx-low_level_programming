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
	int num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			if (num1 < num2)
			{
				for (num3 = 48; num3 < 58; num3++)
				{
					if (num3 != num2 && num3 > num2)
					{
						putchar(num1);
						putchar(num2);
						putchar(num3);
						if (num1 == 55 && num2 == 56 && nu
						   m3 == 57)
						{
							break;
						}
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
