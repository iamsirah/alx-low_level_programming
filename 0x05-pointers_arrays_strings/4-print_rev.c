#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line to stdout
 * @s: string to be printed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	/* calculate the length of string */
	while (s[length] != '\0')

	{
		++length;
	}

	/* prints length of string in reverse */
		for (i = length - 1; i >= 0; --i)
		
	{
		_putchar(s[i]);
	}
	{
		_putchar('\n');
	}
}

