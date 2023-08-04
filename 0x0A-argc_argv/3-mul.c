#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * followed by a new line
 * @argc: count of arg
 * @argv: array of arg
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
