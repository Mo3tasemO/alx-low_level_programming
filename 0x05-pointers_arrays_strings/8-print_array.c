#include"main.h"
#include<stdio.h>
/**
 * print_array - n elements of an array of integers, followed by a new line
 * @a: to be checked
 * @n: to be checked
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
