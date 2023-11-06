#include "main.h"

/**
 * _strcmp - compares two strings
 * s1: Char to be compared
 * s2: char to be compared
 * Return: Always 0
 */

int _strcmp(const char *s1, const char *s2)
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
