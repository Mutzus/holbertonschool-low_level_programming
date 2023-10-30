#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle 
 * Return: void
 */

void print_triangle(int size)
{
	int i, x, z;
	int j = size - 1;

	for (i = 1; i <= size; i++)
	{
		for (x = 0; x <= j; x++)
		{
			_putchar(' ');
		}
		j--;
		for (z = 1; z <= i; z++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
