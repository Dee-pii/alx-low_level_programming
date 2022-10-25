#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * Description: a function that reverses a list
 * @head: a double ptr to the starting node
 * Return: a ptr to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (NULL);

	prev = NULL;

	while ((*head)->next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}
