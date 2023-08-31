#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: to be checked
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
puts(s[i]);
}
}
