#include"main.h"
#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: to be checked
 * @n: to be checked
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
for (n = 0; a[n] != '\0'; n++)
{
printf("%d, ", a[n);
}
printf("\n");
}
