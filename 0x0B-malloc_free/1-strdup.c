#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * @str: pointer to string
 * Return: NULL if str = NULL otherwise returns a pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
