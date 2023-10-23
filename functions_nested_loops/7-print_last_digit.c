#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: character to be checked
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int lastD;

	if (n < 0)
	{
		n = n * -1;
	}
	lastD = n % 10;
	_putchar('0' + lastD);
	return (lastD);
}
