#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strcat - concatenates two strings
 * @dest: to be checked
 * @src: to be checked
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
char *len = *src + '\0';
src = len;
strcat(dest, src);
printf("%s", dest);
return (dest);
}
