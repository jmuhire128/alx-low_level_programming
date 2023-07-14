#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument1
 * @argv: argument2
 *
 * Return: 0 if succes, 1 if not
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *flag;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &flag, 10);
	count = 0;

	if (!*flag)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				count += total / cents[i];
				total = total % cents[i];
			}
		}
		if (total == 1)
		{
			count++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
