#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints elts of an array
 * @a: array
 * @n: number of elements
 *
 * Return: nothing;
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[i]);
	}
	_putchar('\n');
}
