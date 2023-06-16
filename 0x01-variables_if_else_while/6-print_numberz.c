#include <stdio.h>
/**
 * main - print numbers
 * single digits by char without char variable
 * using putchar
 *
 * Return: always 0 if success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}
