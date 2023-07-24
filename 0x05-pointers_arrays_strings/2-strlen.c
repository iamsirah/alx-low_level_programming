#include "main.h"

/**
 * _strlen - Prints out the length of a string
 * @s: The string character
 * Return: length of string
 * Otherwise return 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
