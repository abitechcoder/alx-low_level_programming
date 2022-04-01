#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to find the square root
 * Return: natural number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function that finds square root
 * @n: integer parameter
 * @i: integer parameter
 * Return: square root
 */

int _sqrt(int n, int i)
{
	if(n < 0)
	{
		return (-1);
	}

	if((i * i) > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
