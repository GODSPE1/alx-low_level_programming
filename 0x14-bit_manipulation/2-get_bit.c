#include <stdio.h>
#include "main.h"
/**
 * get_bit - calculate the value of a bit at a given index
 * @n: integer parameter
 * @index: index starting from zero
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	int result;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit = (n >> index);
	result = (bit & 1);

	return (result);
}
