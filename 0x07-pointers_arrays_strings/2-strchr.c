#include <string.h>

/**
 * _strchr - function
 * @s: pointer variable
 * @c: character variable
 * Return: a pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);
	return (result);
}
