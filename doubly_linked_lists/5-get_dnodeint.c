#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head
 * @index: index
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
	{
		return (NULL);
	}
	while (index)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
	{
		return (head);
	}
	return (NULL);
}
