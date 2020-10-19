#include "dog.h"

/**
 *init_dog - initialize the variable struct dog
 *@d: pointer to struct dog
 *@name: pointer to pointer for dog´s name
 *@age: variable for dog´s age
 *@owner: pointer to variable for owner´s name
 *Return: zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
