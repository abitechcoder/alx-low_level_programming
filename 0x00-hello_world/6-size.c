#include <stdio.h>

/**
 * Main - The entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;
	int i;
	unsigned int u;
	long l;
	float f;
	
	printf("Size of a char: %lu byte(s)",(unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)", (unsigned long) sizeof(u));
	printf("Size of a long long int: %lu byte(s)", (unsigned long) sizeof(l));
	printf("Size of a float: %lu byte(s)", (unsigned long) sizeof(f));
	return (0);
}
