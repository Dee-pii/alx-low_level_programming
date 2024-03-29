#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print out the values of a linked list
 * @h: pointer to the first linked list
 *
 * Description: print the required result
 *
 * Return: return integer value
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
			free(ptr->str);
		} else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		c++;
	}
	return (c);
}
