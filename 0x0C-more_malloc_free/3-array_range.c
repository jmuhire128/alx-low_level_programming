#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: small number
 * @max: high number
 *
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *a;
	unsigned int i, range;

	range = (max - min) + 1;

	a = malloc(sizeof(int) * range);

	if (min > max)
	{
		return (NULL);
	}

	if (a == 0)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
