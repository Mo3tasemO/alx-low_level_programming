#include"main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: to be checked
 * Return: Always 0.
 */
void puts_half(char *str)
{
int n = strlen(str);
int len = n / 2;
int len1 = n - len;
for (len1 = 0; str[len1] != '\0'; len1++)
{
_putchar(str[len1]);
}
_putchar('\n');
}
