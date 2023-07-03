#include <stdio.h>
/**
 * _memset - copy characters to a buffer
 * @s: pointed  destination
 * @b: constant byte
 * @n: number of bytes
 * Return: always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return (s);
}
