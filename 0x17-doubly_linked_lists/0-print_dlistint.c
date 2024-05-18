#include "lists.h"


/**
 * print_dlistint- Prints al te elemnt of a list;
 * @h: Pointer t the head of the list
 *
 * Return: The number of the nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
