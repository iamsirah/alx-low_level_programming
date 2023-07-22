#include "main.h"

/**
 * print_line - Draws a straight line in terminal
 * @n: number of times the character should be printed
 * Return: 0 for success
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{

	int i;

	for (i = 0; i <= n; i++)

		{
		_putchar('-');
		}
		{
		_putchar('\n');
		}
	}
}


