#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination char
 * @src: source char
 * @n: number of bytes
 * Return: The result
 */

char *_strncpy(char *dest, const char *src, int n)
{
	char *result = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
