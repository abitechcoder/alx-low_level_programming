#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * Main - print the last digit of the number stored in the variable n
 *
 * Return: Always (0) for success
 * 
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}else if (n % 10 == 0)
	{
		printf("and is 0");
	}else
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
