#include "main.h"

/**
 * puts2 - function that prints one char out of 2
 * @str: string to use
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
