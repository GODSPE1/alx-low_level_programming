#include <stdio.h>
/**
  * main - Entry point
  *
  *Return: alway 0
  */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');

	return (0);
}
