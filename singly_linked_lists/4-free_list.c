#include "lists.h"
/**
 *
 */
 void free_list(list_t *head)
{
	if (head == NULL)
	{
		exit(0);
	}

	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
