#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
