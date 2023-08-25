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
int len;
len = sizeof(a) / sizeof(a[0]);
for (n = len - 1; n >= 0; n--)
{
if (n == 0)
{
printf("%d", *(a + n));
continue;
}
else
{
printf("%d, ", *(a + n));
}
}
}
