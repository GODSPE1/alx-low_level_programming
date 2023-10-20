#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>


/**
 * struct list_t singly linked list
 * @str: dynamically allocated string
 * @len: length of the string
 * @next: self referencial node that help to points to the next node
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif
