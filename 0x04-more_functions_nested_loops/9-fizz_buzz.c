#include <stdio.h>

/**
 * main - program that prints numbers
 * replace multiple of 3 by Fizz and 5 by Buzz
 * multiple of 3 and 5 by FizzBuzz
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
