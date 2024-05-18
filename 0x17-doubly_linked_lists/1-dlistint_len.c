#include "lists.h"

/**
 * dlistint_len - Return s the number of leemts ina list
 * @h: Pointer ot the head of the list
 *
 * Return: The number of ellements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
