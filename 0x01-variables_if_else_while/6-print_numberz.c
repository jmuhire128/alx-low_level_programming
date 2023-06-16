#include <stdio.h>
/**
 * main - print numbers
 * single digits by char
 * using putchar
 *
 * Return: always 0 if success
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
