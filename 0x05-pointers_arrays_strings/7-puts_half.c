#include"main.h"
#include<string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: to be checked
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i = strlen(str);
int len = (i - 1) / 2;
for (len = 0; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
