#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: to be checked
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, len, j;
while (s[i] != '\0')
{
i++;
}
len = i;
for (j = len -1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
