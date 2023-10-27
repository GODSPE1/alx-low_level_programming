#include <stdio.h>
#include "main.h"
/**
 * get_bit - calculate the value of a bit at a given index
 * @n: integer parameter
 * @index: index starting from zero
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	int result;

	bit = (n >> index);
	if (index > 32)
		return(-1);

	result = (bit & 1);

	return (result);
}
