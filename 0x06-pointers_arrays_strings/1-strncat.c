#include"main.h"
#include<stdio.h>
/**
 * _strncat -  function is similar to the _strcat function
 * @dest: to be checked
 * @src: to be checked
 * @n: to be checked
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int len, i;
len = 0;
while (dest[len] != '\0')
{
len++;
}
for (i = 0; src[j] != '\0' && j < n; i++, len++)
{
dest[len] = src[i];
}
dest[len] = '\0';
return (dest);
}
