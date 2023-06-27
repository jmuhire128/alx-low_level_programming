#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, c, len;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	len = i;
	i--;
	while (j < len / 2)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
		j++;
	}
}
