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

	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j = 0;

		ptr = argv[i];
		while (ptr[j] != '\0')
		{
			if (ptr[j] < 48 || ptr[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
j++;
		}
		num = atoi(ptr);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
