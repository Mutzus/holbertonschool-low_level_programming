#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character with which to initialize the array.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	new_array = (char *)malloc(size * sizeof(char));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = c;
	return (new_array);
}
