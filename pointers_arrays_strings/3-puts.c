#include "main.h"

/**
 * _isupper - Checks if c is a capital letter
 * @c: The character to be checked
 * Return: 1 for capital 0 otherwise
 */

void print_rev(char *s)
{
	if (*s != '\0') {
        print_rev(s + 1);
        putchar(*s);
    printf("Original string: %s\n", str);
    printf("String in reverse: ");
    printStringReverse(str);
    printf("\n");

    return 0;
}
}
