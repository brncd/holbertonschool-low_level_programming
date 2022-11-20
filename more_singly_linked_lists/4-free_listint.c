#include "lists.h"
/**
 * free_list - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_listint(head->next);
	}
	free(head);
	head = NULL;
}
