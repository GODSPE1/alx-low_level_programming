#include <stdio.h>
/**
 *main - Entry point
 *Description: Print lower and upper case
 *Return: 0 means success
 */
	int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar (d);
		d++;
	}
	return (0);
}
