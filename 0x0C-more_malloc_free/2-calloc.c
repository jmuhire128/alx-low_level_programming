#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory to nmemb
 * @nmemb: elements
 * @size: size of each elt
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (a == 0)
	{
		return (NULL);
	}

	i = 0;

	while (i < (nmemb * size))
	{
		a[i] = 0;
		i++;
	}

	return (a);
}
