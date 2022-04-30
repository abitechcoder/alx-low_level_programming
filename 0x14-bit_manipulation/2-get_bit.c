#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int parameter
 * @index: index parameter
 * Return: the value of the bit at index value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (n == 0)
		return (0);

	while (i < 64)
	{
		if (i == index)
		{
			return (n & 1);
		}
		n = n >> 1;
		i++;
	}
	return (-1);
}
