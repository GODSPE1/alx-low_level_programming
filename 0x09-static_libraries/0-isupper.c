#include "main.h"

/**
 * _isupper - convert lowercase letters to uppercase
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);

	return (0);

}

