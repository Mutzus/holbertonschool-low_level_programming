#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3]);
    int result;

    int (*op_func)(int, int) = get_op_func(operator);

    if (op_func == NULL)
    {
        printf("Error\n");
        return 99;
    }

    if ((*operator == '/' || *operator == '%') && num2 == 0)
    {
        printf("Error\n");
        return 100;
    }

    result = op_func(num1, num2);

    printf("%d\n", result);
    return 0;
}
