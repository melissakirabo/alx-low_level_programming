/*#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    for(x = '0'; x <= '9'; x++)
    {
        putchar(x + ', ');
        
    }
    putchar('\n');
    return 0;
} */


/*
 * File: 9-print_comb.c
 * Auth: Melissa Kirabo
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
