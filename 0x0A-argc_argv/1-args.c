#include <stdio.h>

/**
 * main - entry point, print number of arguments
 * @argc: Command line argument1
 * @argv: command line argument2
 *
 * Return: integer 0 if success
 */
int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
