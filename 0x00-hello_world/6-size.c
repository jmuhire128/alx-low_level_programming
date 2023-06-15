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
printf("Size for  a char: %d bytes\n", sizeof(char));
printf("size for an int: %d bytes\n", sizeof(int));
printf("Size of a float: %d bytes\n", sizeof(float));
printf("Size of a long: %d bytes\n", sizeof(long));
printf("Size of a short: %d bytes\n", sizeof(short));
return (0);
}
