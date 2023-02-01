#include "lists.h"
/**
 * add_nodeint - adds new node at the beggining of linked list
 * @head: pointer to new/first node
 * @n: int data in new node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
