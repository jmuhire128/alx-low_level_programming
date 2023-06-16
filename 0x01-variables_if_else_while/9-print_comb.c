#include <stdio.h>
/**
 * main - print numbers
 * using putchar only 4 times maximum
 *  without any char variable
 * separated by , followed by space
 *
 * Return: always 0 if success
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
