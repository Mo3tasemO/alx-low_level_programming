#include"main.h"
/**
 * puts2 - prints starting with the first character, followed by a new line.
 * @s: to be checked
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i+=2)
{
_putchar(str[i]);
}
_putchar('\n');
}
