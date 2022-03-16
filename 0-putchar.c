#include "main.h"

/**
 * main - prints -putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char text[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(text); i++ )
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
