#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers with a new line at the end
 * @separator: the separator of the string
 * @n: number of the elements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
