#include "main.h"

/**
 * _isdigit - check for a digit 0 through 9
 * @c: Is the character to check
 * Rerurn: 1 if @c is a digit, 0 otherwise
 * Return: 0 on success.
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
