#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints number of elements in linked list
 * @h: pointer to the number of elements
 * Return: number of element in h
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
