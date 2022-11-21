#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data
 * @head: head
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	size_t result = 0;

	if (!head)
	{
		return (0);
	}
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
