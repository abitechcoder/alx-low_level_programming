#include <stdio.h>

/**
 * get_str_length - function returns the length of string
 * @str: string of characters
 * Return: the length of string
 */

unsigned int get_str_length(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len += 1;
	}

	return (len);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string parameter
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value, len, mylen;
	unsigned int bit, exp;

	if (b == NULL)
		return (0);

	len = get_str_length(b);
	value = 0;
	exp = 1;

	while (len > 0)
	{
		mylen = len - 1;

		if (b[mylen] == '1')
			bit = 1;
		else if (b[mylen] == '0')
			bit = 0;
		else
			return (0);

		value += bit * exp;
		exp *= 2;
		len--;
	}
	return (value);
}
