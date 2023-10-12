#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *elem, *ax = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	elem = malloc(sizeof(dlistint_t));

	if (elem == NULL)
	{
		return (NULL);
	}

	elem->n = n;
	if (!(*head))
	{
		elem->prev = NULL, elem->next = *head;
		*head = elem;
		return (elem);
	}

	while (ax->next)
	{
		ax = ax->next;
	}

	elem->prev = ax;

	elem->next = NULL;

	ax->next = elem;

	return (elem);
}
