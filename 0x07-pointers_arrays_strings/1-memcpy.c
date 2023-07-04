#include <stdio.h>
/**
 * _memcpy - copy data from source location to destination location.
 * @dest: data destination
 * @src: data source
 * @n: number of bytes
 * Return: copied data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *data1 = (char *)src;
	char *data2 = (char *)dest;

	for (i = 0; i < n; i++)
		data2[i] = data1[i];

	return (data2);
}
