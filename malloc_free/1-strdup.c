#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 * Return: A pointer to a newly allocated space in memory
 * containing the duplicated string.
 * Returns NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		continue;

	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
