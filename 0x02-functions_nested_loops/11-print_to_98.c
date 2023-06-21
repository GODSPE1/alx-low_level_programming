#include "main.h"
/**
 * void print_to_98(int n) - prints all natural numbers 
 * from n to 98, followed by a new line.
 * @n: an iput of in type integer
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; n <= 98; n++)
		{
			if  (i != 98)
				printf("%d, ", i);
			else if (i --98)
				printf("%d\n", i);
		}
		else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n, ");
			}
		}
	}
}
