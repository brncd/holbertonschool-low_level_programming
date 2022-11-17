#include "lists.h"
/*
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i, count = 0;

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);	

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);	
}
