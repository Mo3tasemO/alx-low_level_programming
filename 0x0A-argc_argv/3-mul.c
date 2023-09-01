#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, b, result;
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%i\n", result);
return (0);
}
