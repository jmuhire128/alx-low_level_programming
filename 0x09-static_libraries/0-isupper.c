#include "main.h"
/**
 * _isupper - a letter is uppercase or not
 * @c: char to be checked
 *
 * Return: 1 if yes or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
