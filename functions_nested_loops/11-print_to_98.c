#include "main.h"

/**
 * void print_to_98 - Prints numbers to 98
 *
 * Return:
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++ )
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
}
