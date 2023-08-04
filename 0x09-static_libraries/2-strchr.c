#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: The string to search in
 * @c: The character to search for
 * Return: Pointer to the first occurence of the character or NULL if otherwise
 */

char	*_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (0);
}
