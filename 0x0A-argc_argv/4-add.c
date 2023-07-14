#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, add 2 numbers
 * @argc: CL argument
 * @argv: CL argument
 *
 * Return: 0 if success, 1 if not
 */

int main(int argc, char **argv)
{
	int i, sum, n;
	char *flag;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &flag, 10);

			if (*flag)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
