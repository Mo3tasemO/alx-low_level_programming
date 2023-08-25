#include"main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
n = sizeof(a) / sizeof(a[0]);
for (i = n - 1; i >= 0; i--)
{
if (i == 0)
{
printf("%d", *(a + i));
continue;
}
else
{
printf("%d, ", *(a + i));
}
}
}
