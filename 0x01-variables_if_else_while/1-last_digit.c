#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n = 0;
	int last = n % 10;	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	
	
	
	if (last > 5 )
	{
		printf ("Last digit of %d is %d and is greater than 5\n", n, last);  
	} 
	
	else if (last == 0 )
	{
		printf ("Last digit of %d is %d and is 0\n" , n, last);
	} 
	
	else if (last < 6 && last != 0 )
	{
		printf ("Last digit of %d is %d and is less than 6 and not 0\n", n, last); 
	} 
	
	
	
	return (0);
}
