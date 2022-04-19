#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j, c;
	char *str, f_args[] = "cifs";

	va_list valist;

	va_start(valist, format);

	i = 0, c = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (f_args[j] != '\0')
		{
			if (format[i] == f_args[j] && c == 1)
			{
				printf(", ");
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *);
			if (!str)
			{
				printf("(nil)");
			}
			printf("%s", str), c = 1;
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
