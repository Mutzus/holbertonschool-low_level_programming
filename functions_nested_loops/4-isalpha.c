#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic 
 *
 * Return: Always 0 (False) or 1 (True)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
