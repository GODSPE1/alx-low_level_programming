#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: alway 0
 */
int main(void)
{
	int number = 48;
	int letter = 97;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}

	while (letter <= 103)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
