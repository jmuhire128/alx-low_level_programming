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
			_putchar(a[i]);
			_putchar(44);
			_putchar(32);
		}
		_putchar(a[i]);
	}
	_putchar('\n');
}
