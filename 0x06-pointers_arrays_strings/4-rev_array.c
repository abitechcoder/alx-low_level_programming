#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int arr[13];

	i = n - 1;
	while (i >= 0)
	{
		arr[n - i - 1] = a[i];
		i--;
	}
	while (j < n)
	{
		a[j] = arr[j];
		j++;
	}

}
