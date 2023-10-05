#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings using dynamically allocated space
 * @s1: first string
 * @s2: second string
 * Return: the new strings
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len3, len2 = 0;
	int j, i;
	char *newchar;

	if (s1 != NULL)
		len1 = strlen(s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = strlen(s2);
	else
		len2 = 0;
	len3 = len2 + len1;
	newchar = (char *)malloc(sizeof(char) * (len3 + 1));
	if (newchar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		newchar[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		newchar[len1 + j] = s2[j];
	}
	newchar[len1 + len2] = '\0';

	return (newchar);
}
