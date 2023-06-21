#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *@n: represent the integer
 *This function takes an integer as input and prints the sign of the number.
 * If the number is positive, it prints a plus sign (+).
 * If the number is negative, it prints a minus sign (-).
 * If the number is zero, it prints a zero (0).
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
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
	_putchar('\n');
}
