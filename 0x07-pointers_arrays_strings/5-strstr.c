#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring
 * @haystack: to be checked
 * @needle: to be checked
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (*haystack != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
