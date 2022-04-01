#include <stdio.h>

/**
 * is_prime_number - checks if the number is a prime number
 * @n: number
 * Return: 1 if it is a prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		if (n == 2 || n == 3 || n == 5 || n == 7)
		{
			return (1);
		}
		return (0);
	}
	return (1);
}
