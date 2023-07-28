#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: dog->name
 * @age: dog_>age
 * @owner: dog->owner
 *
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;

	strcpy(newdog->name, name);
	newdog->age = age;
	strcpy(newdog->owner, owner);

	return (newdog);
}
