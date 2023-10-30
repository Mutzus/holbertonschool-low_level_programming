#include "main.h"

/**
 * void more_numbers - Prints numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
