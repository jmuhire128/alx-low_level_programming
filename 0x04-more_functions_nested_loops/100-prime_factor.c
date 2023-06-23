#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime factor number
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;
	long number = 612852475143;

	for (n = (int) sqrt(number); n > 2; n++)
	{
		if (number % n == 0)
		{
			printf("%d", n);
			break;
		}
	}

	return (0);
}
