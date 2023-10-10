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
    unsigned int len1 = 0; 
    unsigned int len2 = 0; 
    unsigned int length;
    unsigned int c, k;


     if (s1 == NULL)
        s1 = "";
    
    if (s2 == NULL)
        s2 = "";

   for (len1 = 0; s1[len1] != '\0'; len1++)
        ;
    
    for (len2 = 0; s2[len2] != '\0' && len2 < n; len2++)
        ;

    length = len1 + len2 + 1;
    p = malloc(length * sizeof(char));

    if (p == NULL)
        return NULL;

   for (k = 0; k < len1; k++) {
        p[k] = s1[k];
    }

  
    for (c = 0; c < len2; c++) {
        p[k + c] = s2[c];
    }

    p[k + c] = '\0';  
    return p;
}

