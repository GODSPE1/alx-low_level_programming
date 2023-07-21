#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -function that prints strings
 * @separator: Separator to print between strings
 * @n: constant unsigned int
 * Return: always void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *word;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(ptr, char *);

		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);

		if (i < n -1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
