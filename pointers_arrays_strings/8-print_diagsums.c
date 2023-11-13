#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + (size - 1 - i));
	}
	_putchar('0' + sum_diag1 / 10);
	_putchar('0' + sum_diag1 % 10);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + sum_diag2 / 10);
	_putchar('0' + sum_diag2 % 10);
	_putchar('\n');
}
