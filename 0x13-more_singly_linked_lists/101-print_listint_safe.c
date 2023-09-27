#include "lists.h"

/**
 * print_lisint_safe - Prints a listint_ linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow_ptr = head;
	const listint_T *fast_ptr = head;

	while (fast_ptr && fast_ptr->next)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
