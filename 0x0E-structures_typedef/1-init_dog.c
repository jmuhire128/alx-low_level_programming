#include "dog.h"
/**
 * init_dog - initialize a variable type of dog
 * @d: variable dog type
 * @name: name ofdog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	name = d->name;
	age = d->age;
	owner = d->owner;
}
