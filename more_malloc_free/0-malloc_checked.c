#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         Exits with status value 98 on failure.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
