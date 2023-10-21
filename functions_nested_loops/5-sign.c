#include "main.h"

/**
 * print_sign - prints if the sign of a number is + or -
 * @n: The character to be checked
 * Return: 0 (Number is 0), -1 (-) or 1 (+)
 */

int print_sign(int n)
{
	if (n >= 0)
	{
		if (n > 0)
		{
			_putchar('+');
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
	else
	{
		_putchar('-');
	}
	return (1);
}
