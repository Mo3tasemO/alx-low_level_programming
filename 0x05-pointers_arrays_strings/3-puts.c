#include"main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: decleration
 * Return: Always 0.
 */
void _puts(char *str)
{
int i;
for(i = 0; str[i] != '\0'; i++)
{
puts(str[i]);
}
_putchar('\n');
}
