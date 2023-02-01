#include "lists.h"
/**
 * sum_listint - functions returns sum of all data in linked lists
 * @head: pointer to the linked listed/first node
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total+= temp->n;
		temp = temp->next;
	}
	return (total);
}
