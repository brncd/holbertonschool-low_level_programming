#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		tmp = NULL;
		return (1);
	}
	while (tmp->next != NULL)
	{
		index -= 1;
		tmp = tmp->next;
	}
	if (index == 0)
	{
		tmp->prev->next = tmp->next;
		free(tmp);
		tmp = NULL;
		return (1);
	}
	return (-1);
}
