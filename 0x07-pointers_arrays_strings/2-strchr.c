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
int i;
char alpha[] = "c";
for (i = 0; i < strlen(alpha); i++)
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
