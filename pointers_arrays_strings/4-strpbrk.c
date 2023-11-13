#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the substring containing accepted characters.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr_accept = accept;

		while (*ptr_accept != '\0')
		{
			if (*s == *ptr_accept)
			{
				return s;
			}
			ptr_accept++;
		}
		s++;
	}
	return (NULL);
}
