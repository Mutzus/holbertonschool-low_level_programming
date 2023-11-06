#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes
 * Return: The result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
