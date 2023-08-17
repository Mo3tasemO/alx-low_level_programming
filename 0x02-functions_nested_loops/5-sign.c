#include "main.h"
/**
 * print_sign - print the sign of a number
 * @c: is the char to be checked
 * Return: 1 if char is aletter,lowercase or uppercase, otherwise 0.
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
else if (n == 0)
_putchar('0');
return (0)
else if (n < 0)
_putchar('-');
return (-1);
}
