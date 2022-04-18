#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings separated by a separator
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list valist;

	va_start(valist, n);

	i = 0;

	while (i < n)
	{
		str = va_arg(valist, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
