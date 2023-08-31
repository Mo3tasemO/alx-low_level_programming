#include"main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: to be checked
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s - 1)
{
_putchar('\n');
return;
}
_putchar(*s);
_print_rev_recursion(s + 1);
}
