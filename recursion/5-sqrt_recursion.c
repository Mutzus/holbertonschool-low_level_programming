#include "main.h"

/**
 * _sqrt_recursion - Returns the natural
 * square root of a number.
 * @n: The number.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to recursively
 * find the square root.
 * @n: The number.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */

int sqrt_helper(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}
