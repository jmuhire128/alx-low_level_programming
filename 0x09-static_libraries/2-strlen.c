#include "main.h"

/**
 * _strlen - return the size of string
 * @s: string to study
 *
 * Return: int size of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
