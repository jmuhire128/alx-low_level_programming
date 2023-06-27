#include "main.h"

/**
 * puts_half -function that  print the second half of the string
 * @str: defined string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (k = i / 2; k <= i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
