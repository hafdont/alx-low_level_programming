#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node af a listint_t linked list
 * @head: Pointer to the pointer head of the list
 * Return: The data (n) of the deleted node, or ) if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
