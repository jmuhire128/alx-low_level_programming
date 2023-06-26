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

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
