#include "main.h"

/**
 * puts - print a string
 * @str: string to print
 * Description: print a string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
