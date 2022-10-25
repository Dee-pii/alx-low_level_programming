#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beg of a list
 * Description: a function that adds a new node
 * @head: current place in list
 * @n: int to add
 * Return: ptr position
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = *head;
	nw = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = new;
	return (*head);
}
