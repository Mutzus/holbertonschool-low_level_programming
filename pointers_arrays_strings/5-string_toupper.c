#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: The string to be modified
 * Return: The result
 */

char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (result);
}
