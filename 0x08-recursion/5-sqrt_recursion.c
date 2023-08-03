#include "main.h"
/**
 * sqrt_root - Calculate the square root of a given n
 * @n: imput number
 * @base: The base number to check
 * Return: natural square root of the base
 */

int	sqrt_root(int n, int base)
{
	if (n * n > base)
		return (-1);
	if (n * n == base)
		return (n);
	return (sqrt_root(n + 1, base));
}


/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: the imput number
 * Return: -1 if n does not have a natural square root
 * otherwise return the value.
 */

int	_sqrt_recursion(int n)
{
	return (sqrt_root(1, n));
}
