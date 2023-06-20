#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
