#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: to be checked
 * Return: Always 0.
*/
char *_strdup(char *str)
{
unsigned int i = 0, j = 0;
char *ar;
ar = malloc(sizeof(char) * (j + 1));
if (str == NULL)
{
return (NULL);
}
while (str[i])
i++;
if (ar == NULL)
return (NULL);
while (str[j])
{
ar[j] = str[i];
j++;
}
ar[j + 1] = 0;
return (ar);
}
