#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Write string to the output with a new line
 * @s: constant string that is to be printed
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else

	_putchar('\n');

}
