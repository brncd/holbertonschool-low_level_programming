#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: link to the first node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

