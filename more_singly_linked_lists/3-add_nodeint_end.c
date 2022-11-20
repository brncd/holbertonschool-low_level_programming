#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = NULL, *tmp = NULL;
	
	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
	{
		return (NULL);
	}
	lastNode->n = n;
	lastNode->next = NULL;
	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = lastNode;
	lastNode = tmp;
	return (lastNode);
}
