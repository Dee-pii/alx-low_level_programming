#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * Description: a function that inserts a new node
 * @head: the ptr to the starting node
 * @idx: position where the new node is to be inserted
 * @n: the data to be stored
 *
 * Return: address or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int d = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!idx)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (d++ < (idx - 1))
	{
		if (!temp || !(temp->next))
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
