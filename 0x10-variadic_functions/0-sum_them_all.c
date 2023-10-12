#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - summation of all list arguments
 * @n: parameter
 *
 * Return: 0 if nothing is passed
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list num;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(num, n);
		while (i < n)
		{
			sum += va_arg(num, int);
			i++;

		}
		va_end(num);
	}
	return (sum);

}
