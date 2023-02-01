#include "lists.h"
/**
 * listint_len - function prints number of elements in a linked list
 * @h: pointer to the elments in linked list
 * Return: number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
