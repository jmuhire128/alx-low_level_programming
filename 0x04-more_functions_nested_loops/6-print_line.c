#include "main.h"

/**
 * print_line - print a line with _
 * @n: length of line
 *
 * Retun: void
 */

void print_line(int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		if (n != 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
