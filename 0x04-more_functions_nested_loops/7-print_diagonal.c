#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the _ character
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
_putchar(' ');
_putchar(92);
if (n < 0)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
