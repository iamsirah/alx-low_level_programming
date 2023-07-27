#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to dest input
 * @src: Pointer to source input
 * Return: Pointer to result string @dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
