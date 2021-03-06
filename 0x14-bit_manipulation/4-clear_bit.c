#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer parameter to the value
 * @index: index parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	index = 1 << index;
	if (*n & index)
		*n = (*n ^ index);
	return (1);
}
