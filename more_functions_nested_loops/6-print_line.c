#include "main.h"

/**
 * print_line - Prints n times _
 * @n: number of times _ will be printed
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
