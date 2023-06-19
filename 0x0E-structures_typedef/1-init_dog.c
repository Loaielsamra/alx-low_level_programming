#include "dog.h"

/**
 * init_dog -introduces a new doggie
 * @d: doggie itsef
 * @name: dog name
 * @age: dog's age
 * @owner: dog owner name
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
