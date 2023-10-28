#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given number
 * @n: value to be set
 * @index: is the index strting from 0
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n)* 8)
		return (-1);
	*n &=~(1 << index);
	return (1);
}
