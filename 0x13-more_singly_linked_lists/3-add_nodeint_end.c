#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node in a list
 * @head: A pointer to the head of the list
 * @n: The integer to be stored in the new node
 *
 * Return: THe address of the newelement, or NUll
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
