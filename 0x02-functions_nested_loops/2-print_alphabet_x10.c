#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * Followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num;
		for (num = 0; num < 10; num++)
		{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			{
				_putchar(alpha);
			}
			}
			_putchar('\n');

}
