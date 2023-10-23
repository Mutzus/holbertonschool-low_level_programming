#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: character to be checked
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;
	_putchar(lastD + '0');
	return (lastD);
}
