#include "main.h"
#include <string.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
int i = 0;
while (str[i] !='\0')
{
_putchar(str[i]);
}
_putchar('\n');
}
