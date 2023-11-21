#include <stdio.h>

/**
 * main - prints it's name
 * @argc: argument count
 * @argv: is an array of strings containing the arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}
