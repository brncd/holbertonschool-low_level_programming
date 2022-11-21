#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: idx
 * @n: n
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *tmp = NULL;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !h)
	{
		return (NULL);
	}
	tmp = *h;
	newNode->n = n;
	if (idx == 0)
	{
		*h = newNode;
		newNode->next = tmp;
		newNode->prev = NULL;
		tmp->prev = newNode;
		return (newNode);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < idx)
	{
		free(newNode);
		newNode = NULL;
		return (NULL);
	}
	else if (i == idx)
	{
		newNode->next = NULL;
		newNode->prev = tmp;
		tmp->next = newNode;
	}
	return (newNode);
}
