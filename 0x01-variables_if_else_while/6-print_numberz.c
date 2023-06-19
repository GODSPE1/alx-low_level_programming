#include <stdio.h>
/**
  * main - Entry point
  *
  *Return: alway 0
  */
int main(void)
{
	int number = 97;

	while (number <= 122)
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
