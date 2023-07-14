#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, multiply 2 numbers
 * @argc: CL argument1
 * @argv: CL argument2
 *
 * Return: 0 if success, 1 if not
 */
int main(int argc, char **argv)
{
	int i, mul;


	if (argc > 2)
	{
		mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
