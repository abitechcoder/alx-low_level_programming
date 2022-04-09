#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer that points to a conctenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, size;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size = strlen(s1) + strlen(s2) + 1;

	str = malloc(size);

	if (str == NULL)
	{
		return (NULL);
	}

	if (strlen(s1) == 0)
	{
		for (j = 0; j < strlen(s2); j++)
		{
			str[j] = s2[j];
		}
	}
	else if (strlen(s2) == 0)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			str[i] = s2[i];
		}
	}
	else
	{
		for (i = 0; i < strlen(s1); i++)
		{
			str[i] = s1[i];

			if (i == strlen(s1) - 1)
			{
				for (j = 0; j < strlen(s2); j++)
				{
					str[i + j + 1] = s2[j];
				}
			}
		}
	}
	return (str);
}
