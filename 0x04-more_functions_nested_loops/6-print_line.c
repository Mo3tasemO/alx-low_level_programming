#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: is the integer for the paramaters of my function
 * Return: Always 0.
 */
void print_line(int n)
{
int a = 0;
if (n > 0)
{
while (a <= n)
{
_putchar('_');
a++;
}
_putchar('\n');
n++;
}
else
_putchar('\n');
return (n);
}
