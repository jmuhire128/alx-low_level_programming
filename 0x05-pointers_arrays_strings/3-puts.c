#include "main.h"

/**
 * _puts - prints string
 * @str: a string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
