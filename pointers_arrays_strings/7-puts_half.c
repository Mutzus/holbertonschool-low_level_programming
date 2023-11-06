#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, half, txt;

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	half = (i - 1) / 2;

	for (txt = half + 1; txt < i; txt++)
	{
		_putchar(str[txt]);
	}

	_putchar('\n');
}
