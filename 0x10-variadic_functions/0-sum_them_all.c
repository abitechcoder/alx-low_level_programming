#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: first argument
 * Return: the sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list valist;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
