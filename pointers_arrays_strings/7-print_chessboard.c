#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int counter = 0;
	int i;

	while (counter < 8)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(*(a + counter) + i));
		}
		_putchar(10);
		counter++;
	}
}
