#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory
 *         containing the concatenated string.
 *         Returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
    char *concatenated;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Treat NULL as an empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate length of s1 */
    while (s1[len1] != '\0')
        len1++;

    /* Calculate length of s2 */
    while (s2[len2] != '\0')
        len2++;

    /* Determine the number of bytes to concatenate from s2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for concatenated string (+1 for null terminator) */
    concatenated = (char *)malloc((len1 + n + 1) * sizeof(char));
    if (concatenated == NULL)
        return NULL;

    /* Copy s1 to concatenated */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Concatenate the first n bytes of s2 to concatenated */
    for (j = 0; j < n; j++)
        concatenated[i + j] = s2[j];

    /* Add null terminator */
    concatenated[i + j] = '\0';

    return concatenated;
}
