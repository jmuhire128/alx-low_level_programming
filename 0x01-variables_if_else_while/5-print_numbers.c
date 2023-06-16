#include <stdio.h>

/**
 * main - print numbers
 * in base 10
 * only digits
 *
 * Return: always 0 if success
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
