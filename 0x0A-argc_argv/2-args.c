#include <stdio.h>
/**
 * main - entry point, print all arguments passed
 * @argc: argument1
 * @argv: argument2
 *
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
