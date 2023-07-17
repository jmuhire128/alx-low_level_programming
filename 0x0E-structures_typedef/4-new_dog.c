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
	dog_t *created_dog;

	created_dog = {};

	strcpy(created_dog->name, name);
	created_dog->age = age;
	strcpy(created_dog->owner, owner);

	return (created_dog);
}
