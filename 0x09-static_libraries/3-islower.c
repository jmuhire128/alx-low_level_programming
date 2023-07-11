#include "main.h"

/**
 *_islower - check if charcter is lowercase or not
 * @c: character to be checked
 *
 * Return: 1 if islower and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
