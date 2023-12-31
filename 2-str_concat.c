#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string.
 *         Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2) {
    char *concatenated;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Treat NULL as an empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for concatenated string (+1 for null terminator) */
    concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concatenated == NULL)
        return NULL;

    /* Copy s1 to concatenated */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Concatenate s2 to concatenated */
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    /* Add null terminator */
    concatenated[i + j] = '\0';

    return concatenated;
}
