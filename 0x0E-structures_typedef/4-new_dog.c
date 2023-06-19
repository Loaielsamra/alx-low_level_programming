#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name char string
 * @age: dog age float number
 * @owner: owner name char string
 * Return: pointer to new dog or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	char *cname, *cowner;
	struct dog *doggie;

	doggie = malloc(sizeof(struct dog));
	if (doggie == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	cname = malloc(sizeof(char) * i + 1);
	if (cname == NULL)
	{
		free(doggie);
		return (NULL);
	}
	cowner = malloc(sizeof(char) * j + 1);
	if (cowner == NULL)
	{
		free(cname);
		free(doggie);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		cname[k] = name[k];
	for (k = 0; k <= j; k++)
		cowner[k] = owner[k];
	doggie->name = cname;
	doggie->age = age;
	doggie->owner = cowner;

	return (doggie);
}
