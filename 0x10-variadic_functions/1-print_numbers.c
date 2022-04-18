#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers separated by commas
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;

	va_list valist;

	va_start(valist, n);

	i = 0;

	while (i < n)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
