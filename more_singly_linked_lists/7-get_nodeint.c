#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head
 * @index: index
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (head->next == NULL)
	{
		return (NULL);
	}
	return (head);
}
