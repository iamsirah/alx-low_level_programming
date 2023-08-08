#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @c: The character
 * @size: size of array
 * Return: A pointer to the array or 0 if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	while (i < size)
	{
		*(a + i) = c;
		i++;
	}

	*(a + i) = '\0';

	return (a);
}
