#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 * Return: Void
 */

void print_rev(char *s)
{

	int i, rev;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (rev = i - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n')
}
