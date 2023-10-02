#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers from commalmd line
 *
 *
 *
 *
 * Return: 0 Always.
 */

int main(int argc, char* argv[])
{
	int result = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
