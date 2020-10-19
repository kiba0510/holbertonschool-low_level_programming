#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - new dog user
 *@name: pointer to dog´s name
 *@age: variable with dog´s age
 *@owner: pointer to owner´s name
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *doggy;

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
		j++;
	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->name = malloc(i * sizeof(doggy->name));
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		doggy->name[k] = name[k];
	doggy->age = age;

	doggy->owner = malloc(j * sizeof(doggy->owner));

	if (doggy->owner == NULL)
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		doggy->owner[k] = owner[k];
	return (doggy);
}
