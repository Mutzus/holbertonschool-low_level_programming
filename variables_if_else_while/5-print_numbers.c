#include <stdio.h>

/**
 * main - Prints numbers from 0 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
