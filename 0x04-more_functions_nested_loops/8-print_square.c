#include"main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 0; a < sizq; a++)
{
for (b = 0; b < (size - 1); b++)
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
