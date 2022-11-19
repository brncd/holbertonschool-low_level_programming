#include "lists.h"
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode, *tmp;

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
	{
		return(NULL);
	}
	
	lastNode->len = strlen(str);
	lastNode->str = strdup(str);
	lastNode->next = NULL;
	
	if (*head == NULL)
	{
		*head = lastNode;
		return(lastNode);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = lastNode;
	return (tmp);
}
