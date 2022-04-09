#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *concat - concatenates two strings
 * @str1: string 1
 * @str2: string 2
 * @str3: pointer
 * Return: pointer that points to a conctenated strings
 */

char *concat(char *str1, char *str2, char *str3)
{
	unsigned int i, j;

	if (strlen(str1) == 0)
	{
		for (j = 0; j < strlen(str2); j++)
		{
			str3[j] = str2[j];
		}
	}
	else if (strlen(str2) == 0)
	{
		for (i = 0; i < strlen(str1); i++)
		{
			str3[i] = str1[i];
		}
	}
	else
	{
		for (i = 0; i < strlen(str1); i++)
		{
			str3[i] = str1[i];

			if (i == strlen(str1) - 1)
			{
				for (j = 0; j < strlen(str2); j++)
				{
					str3[i + j + 1] = str2[j];
				}
			}
		}
	}
	return (str3);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer that points to a conctenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size;

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

	str = concat(s1, s2, str);

	return (str);
}
