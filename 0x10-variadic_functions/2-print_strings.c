#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print numbers with a new line at the end
 * @separator: the separator of the string
 * @n: number of string passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(string);
}
