#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{

	int i, rev;

	_putchar(*s);

        for (i = 0; s[i] != '\0'; i++)
        {
        }
        for (rev = i - 1; rev >= 0; rev--)
        {
                _putchar(s[rev]);
        }
        _putchar('\n');
}
