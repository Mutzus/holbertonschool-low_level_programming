#include "main.h"

/**
 * add - Prints the add of two integers
 * @n: character to be checked
 * Return: The Result of the add
 */

int add(int i, int n)
{
	if (i < 0)
	{
		i = -i;
	}
	if (n < 0)
	{
		n = -n;
	}
	int x = i + n;

	return (x);
}
