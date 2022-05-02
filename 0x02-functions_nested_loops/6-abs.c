#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @n: the integer paraemeter
 * Return: the absolute value of the integer
 */

int _abs(int n)
{
	int value;

	value = 0;
	if (n < 0)
	{
		while (n < 0)
		{
			value += 1;
			n++;
		}
		return (value);
	}
	return (n);
}
