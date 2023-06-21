#include "main.h"
/**
 * int _islower(int c) - a function
 *
 * islower - Check if the input is lower case
 *
 * c: Character of the ASCII code
 *
 * Return: 1 for lower case and Return 0 for others
 */

/* Character of the ASCII code*/

int _islower(int c)
	/* Character of the ASCII code*/
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
