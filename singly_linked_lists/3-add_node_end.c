#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode = NULL, *tmp = NULL;

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
	{
		return (NULL);
	}

	lastNode->len = strlen(str);
	lastNode->str = strdup(str);
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = lastNode;
	return (tmp);
}
