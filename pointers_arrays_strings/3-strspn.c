#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the substring containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *temp;

	temp = accept;

	while (*accept != '\0')
	{
		if (*s == *accept)
			{
				count++;
				accept = temp;
				s++;
			}
			else
			{
				accept++;
			}
	}
	return (count);
}
