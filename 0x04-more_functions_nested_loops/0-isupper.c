#include "main.h"

/**
 * _isupper - Checks for characters in uppercase
 * @c: the character to be checked
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
