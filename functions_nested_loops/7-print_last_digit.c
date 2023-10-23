#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: character to be checked
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int lastD;
	if (n == INT_MIN)
	{
		n=8;
	}
	if (n < 0)
	{
		n = -n;
	}
	lastD = n % 10;
	_putchar('0' + lastD);
	return (lastD);
}
