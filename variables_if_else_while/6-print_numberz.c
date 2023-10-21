#include <stdio.h>

/**
 * main - Prints numbers from 0 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int number = 9;
        while (number >= 0)
        {
                putchar(number);
                number--;
        }
        putchar('\n');
        return (0);
}
