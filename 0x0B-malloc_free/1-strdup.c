#include <stdio.h>
#include <stdlib.h>
/**
 * -strlen - calculate the lenght of string
 * @str: string parameter
 *
 * Return: lenght of the string on success
 */
int _strlen(char *str)
{
	int len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - duplicate a string and returns a pointer to the newly allocated space
 * @str - string to duplicate
 *
 * Return pointer of the dupliicated string on success.
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = _strlen(str);
       	char *ptr;

	ptr =(char*)malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		while(*str)
			ptr[i++] = *str++;

		ptr[i] = '\0';
	}
	else 
		return (NULL);

	return (ptr);
}
