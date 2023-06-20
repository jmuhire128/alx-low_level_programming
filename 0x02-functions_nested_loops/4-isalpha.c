#include "main.h"

/**
 * _isalpha - check wether a character is alphabet or not
 * @c: character to be checked
 *
 * Return: 1 if is a letter (lowercase or uppercase)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
