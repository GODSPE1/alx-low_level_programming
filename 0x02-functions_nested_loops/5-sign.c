#include "main.h"

/**
 * main - check the code.
 *@n: represent the integer
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		-purchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	-putchar('\n');
}