#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: Pointer to the pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		*head = next;
	}

	*head = prev;

	return (prev);
}
