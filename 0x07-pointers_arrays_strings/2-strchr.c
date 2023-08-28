#include"main.h"
/**
 * _strchr - locates a character in a string.
 * @s: to be checked
 * @c: to be checked
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; i < strlen(c); i++)
{
if (s[i] = c)
{
return (s);
}
else
{
return ('\0');
}
}
}
