#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate number of arguments passed into it
 * @argc: number of argumens
 * @argv: array of the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int a = 0;
int q = 0;
int d = 0;
int n = 0;
int p = 0;
int num = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);

if (num < 0)
printf("0\n");

q = num / 25;
num = num % 25;

d = num / 10;
num = num % 10;

n = num / 5;
num = num % 5;

a = num / 2;
num = num % 2;

p = num;
printf("%d\n", (a + q + d + n + p));

return (0);
}
