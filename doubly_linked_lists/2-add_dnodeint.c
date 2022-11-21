#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: head
 * @n: n
 * Retrun: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *tmp = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;
	tmp = *head;
	if (tmp != NULL)
	{
		tmp->prev = *head;
	}
	return (newNode);
}
