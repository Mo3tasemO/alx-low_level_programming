#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the _ character
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a;
if (n <= 0)
_putchar('\n');
else
{
for (a = 0; a <= n; a++)
_putchar(92);
_putchar('\n');
}
}
