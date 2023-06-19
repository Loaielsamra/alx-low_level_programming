#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggie
 * @name: doggie name char string
 * @age: dog age integer
 * @owner: owner name char string
 */

typedef struct dog
{
	char *name;
	int age;
	char *owner;
} dog_t;

#endif
