#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - gives number of elements in list
 *
 * Return: 0 on success
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
