#include <stdio.h>
/**
 * main - printing alphabet
 * lower case only
 * use putchar twice
 *
 * Return: always 0 if succes
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
