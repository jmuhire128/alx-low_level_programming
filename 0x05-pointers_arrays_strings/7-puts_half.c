#include "main.h"

/**
 * puts_half -function that  print the second half of the string
 * @str: defined string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i + 1) / 2;
	}


	for (k = j; k < i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
