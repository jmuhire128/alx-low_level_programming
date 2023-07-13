#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to addresse of old memory
 * @old_size: size of ptr memory
 * @new_size: reallocated memory
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	s = '\0';

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}

	if (new_size == old_size)
	{
		return (s);
	}

	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
