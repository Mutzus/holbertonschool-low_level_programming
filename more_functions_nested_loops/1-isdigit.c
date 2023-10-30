#include "main.h"

/**
 * _isdigit - Checks if c is a digit
 * @c: The character to be checked
 * Return: 1 if is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c < 9 || c > 1)
	{
		return 1;
	}
	return 0;
}
