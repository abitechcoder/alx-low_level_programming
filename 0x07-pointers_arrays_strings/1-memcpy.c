#include <string.h>

/**
 * _memcpy - fills the first n bytes of the memory area pointed to by s
 * @dest: destination
 * @src: source
 * @n: byte
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
