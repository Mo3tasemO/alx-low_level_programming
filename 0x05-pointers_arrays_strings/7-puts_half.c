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
int len = i / 2;
int len1 = i - len;
int n = (len1 - 1);
for (n = 0; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
