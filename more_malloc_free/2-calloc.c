#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         Returns NULL if nmemb or size is 0, or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size) {
    void *ptr;
    unsigned int total_size, i;

    /* Check if nmemb or size is 0 */
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Calculate the total size to allocate */
    total_size = nmemb * size;

    /* Allocate memory for the array */
    ptr = malloc(total_size);

    /* Check if malloc fails */
    if (ptr == NULL)
        return NULL;

    /* Initialize the memory to zero */
    for (i = 0; i < total_size; i++)
        *((char *)ptr + i) = 0;

    return ptr;
}
