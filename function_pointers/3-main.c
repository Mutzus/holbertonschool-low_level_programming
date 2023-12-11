#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - main function
*Description: selects arithmetic oper and performs it using func pointer
*@argc: number of args
*@argv: actual value of args
*Return: 0 if success
*/

int main(int argc, char *argv[])
{
int calc;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
if (argv[2][1] != '\0' || (argv[2][0] != '+' && argv[2][0] != '-' &&
argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%'))
{
	printf("Error\n");
	exit(99);
}
calc = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", calc);
return (0);
}
