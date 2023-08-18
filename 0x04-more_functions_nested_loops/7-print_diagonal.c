#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a = 0;
if (n > 0)
{
while (a <= n)
{
_putchar('\\');
a++;
}
_putchar('\n');
}
else
_putchar('\n');
}
