#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line to stdout
 * @s: string to be printed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;
	int length;
	char *s;

	/* calculate the length of string */
	for (length = 0; s[length] != '\0' ++length)

	/* prints length of string in reverse */
		for (i = length - 1; i >= 0; --i)
		
	{
		_putchar(s[i]);
	}
	{
		_putchar('\n');
	}
}

