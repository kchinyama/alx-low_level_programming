#include "lists.h"
/**
 * get_nodeint_at_index - function calls the node at the nth position
 * @head: pointer to the linked list/first node
 * @index: index of the node beggining from 0
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}
	return (temp ? temp : NULL);
}
