#include "lists.h"
/**
 * listint_len - returns the no of elements in a list
 * Description: a function that returns the no of elements
 * @h: singly linked list
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t d;

	for (d = 0; h; d++)
		h = h->next;

	return (d);
}
