#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a d linked list
 * @head: head
 * @n: n
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *tmp = NULL;

	if (!head)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(struct dlistint_s));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		newNode->next = NULL;
		return (newNode);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
	tmp->prev = newNode;
	return (newNode);
}
