#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 for success
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
