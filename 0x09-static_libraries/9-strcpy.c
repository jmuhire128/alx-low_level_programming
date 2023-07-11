#include "main.h"

/**
 * _strcpy - function that copies string 2 to 1
 * @dest: final string
 * @src: string to copy
 *
 * Return: a character
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
