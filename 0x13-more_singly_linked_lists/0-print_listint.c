#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list_t list
 * Description: a function that prints all the elements
 * @h: singly linked list print
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t d;

	for (d = 0; h; d++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (d);
}
