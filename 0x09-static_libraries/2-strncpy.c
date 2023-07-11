#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: string to be copied
 * @n: maximum bytes to be copied frm src
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
