#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments in string *
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int i, num, sum  = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		num = (atoi(argv[i]));
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
