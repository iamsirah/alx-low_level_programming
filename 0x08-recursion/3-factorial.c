#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The input number.
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
