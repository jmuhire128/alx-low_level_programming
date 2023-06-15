/*
 *File: 6-size.c
 *Author: Muhire Alx-C17
 */

#include <stdio.h>
/**
 *main -Entry point
 *
 *Description: We are going to print sizes of various types
 *Return: always 0
 */
int main(void)
{
printf("Size of a char: %d bytes\n", sizeof(char));
printf("Size of an int: %d bytes\n", sizeof(int));
printf("Size of a long int: %d bytes\n", sizeof(long int));
printf("Size of a long long int: %d bytes\n", sizeof(long long int));
printf("Size of a float: %d bytes\n", sizeof(float));
return (0);
}
