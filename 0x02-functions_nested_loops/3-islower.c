#include <ctype.h>

/**
 * _islower - checks for lowercase character and returns 1 if c is lowercase
 *
 * @c: parameter
 *
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	return (1);
}
