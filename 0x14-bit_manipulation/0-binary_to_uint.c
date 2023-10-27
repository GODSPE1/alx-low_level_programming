#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: string containing 0 and 1
 *
 * Return: the converted value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int value = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] < '\0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '\0');
		i++;
	}
	return (value);
}
