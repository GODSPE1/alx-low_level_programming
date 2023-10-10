#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concaenate two string
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes
 * Return: pointer to the allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len;

	if(s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
	{
		p[len++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		p[len++] = s2[i];
	}
	p[len] = '\0';

	return (p);
}
