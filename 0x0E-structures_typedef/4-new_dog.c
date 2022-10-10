#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - write a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *cname, *cowner;
	int length1, length2, d;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);
	for (length1 = 0; name[length1]; length1++)
		;
	for (length2 = 0; owner[length2]; length2++)
		;
	length1++;
	length2++;
	cname = malloc(length1);
	if (!cname)
	{
		free(ptr);
		return (NULL);
	}
	cowner = malloc(length2);
	if (!cowner)
	{
		free(cname);
		free(ptr);
		return (NULL);
	}
	for (d = 0; d < length1; d++)
		cname[d] = name[d];
	for (d = 0; d < length2; d++)
		cowner[d] = owner[d];

	ptr->name = cname;
	ptr->owner = cowner;
	ptr->age = age;

	return (ptr);
}
