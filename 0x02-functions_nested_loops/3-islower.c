#include "main.h"
/**
 *int _islower(int c) - check if char is lower case
 *
 *
 *@c: Character of the ASCII code
 *
 * Return: 1 for lower case and Return 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);

	_putchar('\n');
}
