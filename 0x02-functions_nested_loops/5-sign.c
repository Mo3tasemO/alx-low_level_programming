#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: is the char to be checked
 * Return: 1 if char is greater than zero
 * Return: 0 if char is equal zero
 * Return: -1 if char is lessthan zero
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
