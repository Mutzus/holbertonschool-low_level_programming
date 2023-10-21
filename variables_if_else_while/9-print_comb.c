#include <stdio.h>

/**
 * main - Prints numbers from 0 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	
	while (number <= 99)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
