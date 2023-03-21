#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create new dog
 * @name: string containing dog name
 * @age: dog age
 * @owner: string containing dog owner name
 * Return: new dog
 */

	dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perro = malloc(sizeof(dog_t));
		if (!perro)
			return (NULL);

	perro->name = malloc(strlen(name) + 1);

		if (!perro->name)
		{
			free(perro);
			return (NULL);
		}
		strcpy(perro->name, name);

	perro->owner = malloc(strlen(owner) + 1);

		if (!perro->owner)
		{
			free(perro->name);
			free(perro);
			return (NULL);
		}
		strcpy(perro->owner, owner);
		
		perro->age = age;

		return (perro);
}
