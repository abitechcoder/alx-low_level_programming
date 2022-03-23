#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	return (1);
}
