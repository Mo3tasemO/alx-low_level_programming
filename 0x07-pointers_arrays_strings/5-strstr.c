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
for (i = 0; needle[i] != '\0'; i++)
{
if (*haystack == needle[i])
return (haystack);
else
return (needle);
}
haystack++;
}
return (NULL);
}
