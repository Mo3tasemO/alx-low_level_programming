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
for (a = 0; a <= size; a++)
{
for (b = 0; b <= a; b++)
_putchar('#');
if (a == (size - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
