#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination char
 * @src: source char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int txt;

	for (txt = 0; src[txt] != '\0'; txt++)
	{
		dest[txt] = src[txt];
	}
	dest[txt] = '\0';

	return (dest);
}
