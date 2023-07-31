#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @src: source input
 * @dest: destination input
 * @n: number of bytes
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
