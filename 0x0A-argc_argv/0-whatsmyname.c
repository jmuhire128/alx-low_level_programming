#include <stdio.h>
#include "main.h"

/**
 * main - entry point, print name
 * @argc: CL argument
 * @argv: command Line argument
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
