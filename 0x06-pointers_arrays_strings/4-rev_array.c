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
int len1;
int len = n - 1;
for (i = 0; i < n / 2; i++)
{
len1 = a[i];
a[i] = a[len];
a[len--] = len1;
}
}
