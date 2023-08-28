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
<<<<<<< HEAD
int i;
for (i = 0; i < strlen(s); i++)
=======
while (*s)
>>>>>>> 3885f78b4c296633e8cc5c8244e999eec0c43d03
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
