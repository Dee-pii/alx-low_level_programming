#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beg of a list
 * Description: a function that adds a new node
 * @head: current place in list
 * @n: int to add
 * Return: ptr position
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
