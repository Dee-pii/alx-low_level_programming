#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * Description: a function that prints all the elements
 * @h: singly linked list.
 * Return: number of elements
 */

size_t print_list(const list_t *h)

{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
