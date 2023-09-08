#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: to be checked
 * @s2: to be checked
 * Return: Always 0.
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
int k, q;
for (i = 0; s1[i] != '\0'; i++)
{
for (j = 0; s2[j] != '\0'; j++)
{
s1[i] = s2[j];
i++;
}
}
if (s1 == NULL)
{
return (NULL);
}
s1 = malloc(k * sizeof(int));
while (i < k)
{
s1[i] = q;
i++;
}
return (s1);
}
