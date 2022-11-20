#include "lists.h"
/**
 *
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
