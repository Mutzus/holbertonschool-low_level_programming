#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	else
	{
		return (1);
	}
}
