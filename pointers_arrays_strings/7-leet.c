#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: Char type string
 * Return: str
 */

char *leet(char *str)
{
	char leet_map[256];

	for (int i = 0; i < 256; i++)
	{
		leet_map[i] = (char)i;
	}
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';
	for (int i = 0; str[i] != '\0'; i++)
	{
		str[i] = leet_map[(int)str[i]];
	}
	return (str);
}
