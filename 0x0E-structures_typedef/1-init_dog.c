#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes struct dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
