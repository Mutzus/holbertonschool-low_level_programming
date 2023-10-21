#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints if the last digit of n is 0, 5+ or 6-
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit >= 6)
	{
		if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastDigit);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	return (0);
}
