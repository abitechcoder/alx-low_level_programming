#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: the capitalised string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (i < (sizeof(str) / sizeof(char)))
	{
		if(*str[i] != "\0")
		{
			printf("%c", str[i]);
		}
	}
	return (0);
}
