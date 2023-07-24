#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
