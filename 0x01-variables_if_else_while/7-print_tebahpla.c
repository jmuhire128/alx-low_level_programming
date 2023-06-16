#include <stdio.h>
/**
 * main - print letters in lowercase
 * reverse order
 * using putchar
 *
 * Return: always 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
