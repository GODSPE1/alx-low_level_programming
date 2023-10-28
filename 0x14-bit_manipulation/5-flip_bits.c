#include <stdio.h>
#include "main.h"
/**
 * flip_bits - count the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, bitcount = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			bitcount++;
	}
	return (bitcount);
}
