#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of list
 * Description: a function that adds a new node
 * @head: current place
 * @n: int to add
 * Return: ptr position
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
