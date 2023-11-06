#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{

	int i, txt, rev;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	i = i - 1;

	for (txt = 0; txt < i; i--, txt++)
	{
		rev = s[i];
		s[i] = s[txt];
		s[txt] = rev;
	}
}
