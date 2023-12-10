#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: Pointer to a string representing the name.
 * @f: Pointer to a function that takes a char pointer as a parameter.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
