#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: idx
 * @n: n
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	tmp = *head;
	while (i < (idx - 1))
	{
		if (tmp == NULL)
		{
			free(newNode);
			newNode = NULL;
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	newNode->n = n;
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
