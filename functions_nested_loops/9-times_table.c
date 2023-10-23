#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return:
 */

void times_table(void)
{
	int i, n;

	for (i = 0; i < 10 ; i++)
	{
		for (n = 0 ; n < 10 ; n++)
		{
			int x = i * n;

			if (n != 0)
			{
				_putchar('0');
			}
			if (x < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
			if (n < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
