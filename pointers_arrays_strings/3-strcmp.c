#include "main.h"

/**
 * _strcmp - compares to strings
 * s1: Char to be compared
 * s2: char to be compared
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 > *s2) ? 1 : -1;
		}
		s1++;
		s2++;
	}
	return (0);
}
