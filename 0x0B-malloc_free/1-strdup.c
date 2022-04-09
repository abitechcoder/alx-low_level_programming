#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * @str: pointer to string
 * Return: NULL if str = NULL otherwise returns a pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char *)malloc(strlen(str));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(*str) * strlen(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
