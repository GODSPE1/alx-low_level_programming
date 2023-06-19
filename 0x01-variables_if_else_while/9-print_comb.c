#include <stdio.h>
/**
 * main - entry
 *Return: 0 success
 */

int main(void)
{
	int i = 0;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
