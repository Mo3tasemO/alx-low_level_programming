#include"main.h"
/**
 * puts2 - prints starting with the first character, followed by a new line.
 * @str: to be checked
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, len;
while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
