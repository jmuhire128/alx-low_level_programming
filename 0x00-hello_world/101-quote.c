/*
 *Write a C program that prints
 */
#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *
 *Description: This program will prints
 *without error using Neither printf nor puts
 *Return: 1 if success
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
