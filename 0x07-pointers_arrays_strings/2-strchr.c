#include "main.h"

/**
 * _strchr - locate a character in a string
 * @c: character to be located
 * @s: string to study
 *
 * Return: a pointer to c if found or NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
