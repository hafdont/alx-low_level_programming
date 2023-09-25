#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the begining of a list_t list
 * @head: Pointer to apointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node
 *
 * Return: The addressof the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char*str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
