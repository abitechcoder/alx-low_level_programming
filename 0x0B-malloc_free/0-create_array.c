#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * @size: unsigned int value
 * @c: the character value
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * size);

	return (p);
}
