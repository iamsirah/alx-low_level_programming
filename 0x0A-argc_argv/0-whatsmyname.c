#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * followed by a new line
 * @argc: count of arg
 * @argv: array of arg
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
