#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: character to  be checked
 * @s: the string input
 * Return: pointer to the occurance of @c or NULL if absent
 */

char *_strchr(char *s, char c)
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
