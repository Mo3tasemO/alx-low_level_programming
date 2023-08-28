#include"main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: to be checked
 * @c: to be checked
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
