#include "lists.h"
/**
 * get_nodeint_at_index - a func that returns the nth node of a list
 * Description: a function that returns the nth node
 * @head: head of the list
 * @index: which node to stop at
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	d = 0;
	while (d < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		d++;
	}
	return (head);
}
