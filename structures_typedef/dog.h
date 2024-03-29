#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure composed by two char type pointers and a float
 * @name: pointer to name individual members
 * @age: age of individual members
 * @owner: pointer to owner names of individual members
 */

	struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

	/**
	 * dog_t - struct new name
	 */
	typedef struct dog dog_t;

	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
#endif
