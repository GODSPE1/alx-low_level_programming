#include <stdio.h>
/**
 * _strchr - locates a given characterin a string
 * @s: the pointer to the string
 * @c: the character to locate
 * Return:the pointer to the first occcurence of c
 */
char *_strchr(char *s, char c)
{
	char *l;

	while (*s != c && *s != '\0')

		if (*s == c)
		{
			l = s++;
		}
	return (l);
}
