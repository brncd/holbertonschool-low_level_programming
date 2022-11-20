#include "lists.h"
/**
 * pop_listint - deletes the head of a linked list and returns the data
 * @head: head
 * Return: the node data
 */
int pop_listint(listint_t **head)
{
	int nodeData;

	if (*head == NULL)
	{
		return (0);
	}
	nodeData = (*head)->n;
	*head = (*head)->next;

	return (nodeData);
}
