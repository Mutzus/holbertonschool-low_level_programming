#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/**
 * main - Entry point of the program
 *
 * Description: Using function if to get if the value of n is p, n or z.
 *
 * Return: Always 0 (success)
 */

	if (n >= 0)
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is positive\n", n);
		}
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
