/*
 * File: 2-print_alphabet.c
 * Auth: Melissa Kirabo
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
		putchar(tolower(x)); 

	putchar('\n');

	return (0);
}
