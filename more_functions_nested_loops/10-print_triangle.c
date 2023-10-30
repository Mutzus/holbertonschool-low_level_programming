#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle 
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for(j = size; j >= 1; i--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
	return(0);
}
