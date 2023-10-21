#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 and letters a-f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	char n = 'a';
	
	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
