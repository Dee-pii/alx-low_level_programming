#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - a function that returns the number of elements
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int d;

	for (d = 0; h; d++)
		h = h->next;
	return (d);
}
