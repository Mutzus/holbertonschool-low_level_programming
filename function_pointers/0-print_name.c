#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
*print_name - function that prints a name
*Description: function that prints a name
*@name: name to be printed
*@f: name of the function
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	exit(1);
(*f)(name);
}
