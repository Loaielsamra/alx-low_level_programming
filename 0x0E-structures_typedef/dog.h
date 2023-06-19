#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggie
 * @name: doggie name char string
 * @age: dog age float
 * @owner: owner name char string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
