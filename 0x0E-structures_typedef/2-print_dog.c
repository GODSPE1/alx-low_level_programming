#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - printthe struct dog
 * @d: pointer to the struct
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age != 0)
			printf("%f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("%s\n", d->owner);
	}

}

