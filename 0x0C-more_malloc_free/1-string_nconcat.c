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
	int i;
	unsigned int len2, c, k, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

		for (len2 = 0; s2[len2] != '\0'; len2++)

			if (n >= len2)
				length = len2 + i;
			else
				length = i + n;

	p = malloc((length + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
	{
		p[k] = s1[k];
	}

	for (c = 0; c < n && s2[i] != '\0'; c++)
	{
		p[i + c] = s2[c];
	}
	p[i + n] = '\0';

	return (p);
}
