#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops off the head of the list and returns its contents
 * Description: a function that deletes the head node
 * @head: head of the list
 * Return: contents of head
 */

int pop_listint(listint_t **head)

{
	int d;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		d = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		d = 0;
	return (d);
}
