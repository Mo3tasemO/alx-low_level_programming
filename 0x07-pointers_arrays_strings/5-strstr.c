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
while (*needle)
{
for (i = 0; haystack[i] != '\0'; i++)
{
if (*needle != haystack[i])
break;
}
if (i != 0)
haystack++;
else
return (haystack);
}
return (NULL);
}
