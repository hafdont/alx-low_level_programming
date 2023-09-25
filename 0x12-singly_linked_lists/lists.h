#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct lists-S - singly linked list
 * @str: String - (malloc'ed string)
 * @len: Length of string
 * @next: points to the next node
 *
 * Description: Sindly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
