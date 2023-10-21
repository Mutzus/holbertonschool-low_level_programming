#include "main.h"

/**
 * main - Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
