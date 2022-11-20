#include "lists.h"
/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *x = NULL, *y = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	x = *head;
	if (index == 0)
	{
		*head = x->next;
		y = x->next;
		free(x);
		return(1);
	}
	while ((i < (index - 1)) && (x != NULL))
	{
		x = x->next;
		i++;
	}
	if (x->next == NULL || x == NULL || i != (index - 1))
	{
		return (-1);
	}
	y = x->next;
	x->next = y->next;
	free(y);
	return(1);
}
