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
if (str == NULL)
return (NULL);
while (str[i])
i++;
ar = malloc(sizeof(char) * (i + 1));
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
