#include <stdio.h>
#include "main.h"
/**
 * set_bit - set the value of bit at a given index
 * @n: integer parameter
 * @index: index starting from 0
 *
 * Return: the value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);

	return (1);
}
