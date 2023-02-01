#include "lists.h"
/**
 * add_nodeint_end - function adds node at the end of linked list
 * @head: pointer to first node in linked list
 * @n: int data inside new node
 * Return: address of new node or NULL;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode;
	listint_t *temp = *head;

	endNode = malloc(sizeof(listint_t));

	if (!endNode)
		return (NULL);
	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = endNode;
	return (endNode);
}
