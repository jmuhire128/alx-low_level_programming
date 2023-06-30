#include "main.h"

/**
 * _strncat - function that concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be appended to dest
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
