#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		len += 1;
		h = h->next;
	}
	return (len);
}
