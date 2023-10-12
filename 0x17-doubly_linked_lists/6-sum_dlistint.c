#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums all data of linked list
 *
 * Return: 0 on success
 */

int sum_dlistint(dlistint_t *head)
{
	int addition = 0;

	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}

	return (addition);
}
