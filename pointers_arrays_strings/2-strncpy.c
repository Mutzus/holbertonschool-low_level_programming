#include "main.h"

/**
* _strncpy - copies string
* @dest: destination string
* @src: source string
* @n: bytes from src
* Return: the result
*/

char *_strncpy(char *dest, char *src, int n)
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
