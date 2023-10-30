#include "main.h"

/**
 * _isupper - Checks if c is a capital letter
 * @c: The character to be checked
 * Return: 1 for capital 0 otherwise
 */

int _isupper(int c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	return (1);
}
