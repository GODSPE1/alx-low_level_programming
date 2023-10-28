#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given number
 * @n: pointer to the value to be set
 * @index: is the index strting from 0
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
