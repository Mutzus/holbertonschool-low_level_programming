#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 * Return: A pointer to the momoty area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++) {
        s[i] = b;
    }

    return (s);
}