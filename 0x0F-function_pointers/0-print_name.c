#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name of the person
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

}

