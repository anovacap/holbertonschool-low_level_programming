#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: duplcate string or NULL
 */
char *_strdup(char *str)
{
	char *dup = NULL;
	int i;
	int k = 0;

	if (str == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		;
	dup = malloc(sizeof(char) * k + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= k; i++)
		dup[i] = str[i];
	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Return: struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy)
	{
		doggy->name = _strdup(name);
		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->age = age;
		doggy->owner = _strdup(owner);
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}
	}
	return (doggy);
}
