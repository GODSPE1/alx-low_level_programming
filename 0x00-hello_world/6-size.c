#include <stdio.h>
/**
 * main-Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %li  bytes(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %li  byte(S)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}