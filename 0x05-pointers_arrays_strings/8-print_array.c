#include"main.h"
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
if (n == '\0')
{
printf("%d", a[n]);
continue;
}
printf("%d; ", a[n]);
}
printf("\n");
}
