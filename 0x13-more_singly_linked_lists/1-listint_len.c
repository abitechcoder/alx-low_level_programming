#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the no of elements of a listint_t list
 * @h: linked list
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
