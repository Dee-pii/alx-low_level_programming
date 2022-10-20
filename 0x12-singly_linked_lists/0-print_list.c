#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)

{
	size_t d;

	for (d = 0; h; d++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (d);
}
