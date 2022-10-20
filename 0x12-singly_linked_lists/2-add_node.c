#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - gets length of the s
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int d;

	for (d = 0; s[d]; d++)
		;
	return (d);
}
/**
 * add_node - a function that adds a new node
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int d, length;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	length = _strlen(str);
	new = *head;
	content = malloc((length + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (d = 0; str[d]; d++)
		content[d] = str[d];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
