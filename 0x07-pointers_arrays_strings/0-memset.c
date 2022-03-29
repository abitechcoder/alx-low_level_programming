#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to string character
 * @b: constant byte
 * @n: integer
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
