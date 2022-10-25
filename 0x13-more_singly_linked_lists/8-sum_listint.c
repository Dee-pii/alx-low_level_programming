#include "lists.h"
/**
 * sum_listint - sums all elements of a list
 * Description: a function that returns the sum
 * @head: ptr to the head of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s;

	for (s = 0; head; s += head->n, head = head->next)
		;
	return (s);
}
