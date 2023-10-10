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
	int len1;
	unsigned int len2, c, k, length;

	if (s1 == NULL)
		s1 = "";
	else
		for (len1 = 0; s1[len1] != '\0'; len1++)

			if (s2 == NULL)
				s2 = "";
			else
				for (len2 = 0; s2[len2] != '\0'; len2++)

					if (n >= len2)
						length = len2 + 1;
					else
						length = len1 + n + 1;

	p = malloc(length * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
	{
		p[k] = s1[k];
	}

	for (c = 0; c < n && s2[len1] != '\0'; c++)
	{
		p[len1 + c] = s2[c];
	}
	p[length] = '\0';

	return (p);
}
