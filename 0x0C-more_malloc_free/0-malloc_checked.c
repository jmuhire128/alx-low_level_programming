#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory with malloc
 * @b: size to allocate with malloc
 *
 * Return: void pointer to allocatade memory
 */
void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);

	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
