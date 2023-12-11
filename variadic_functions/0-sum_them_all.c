#include "variadic_functions.h"

/**
*sum_them_all - sum all parameters
*Description: sum of all function parameters
*@n: number of args
*Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
