#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: to be checked
 * @b: to be checked
 * @n: to be checked
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
