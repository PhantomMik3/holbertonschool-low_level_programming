#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: struct type variable
 * @name: string variable
 * @age: variable containing age
 * @owner: string variable
 * Return: void
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

