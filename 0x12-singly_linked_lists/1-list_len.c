#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: linked list parameter
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len = len + 1;
		h = h->next;
	}
	return (len);
}
