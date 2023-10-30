#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: Number of times the diagonal will be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 2;

	while(i <= n);
	{
		while(j <= 2)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
	return(0);
}
