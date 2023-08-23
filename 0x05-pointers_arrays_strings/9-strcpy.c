#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: to be checked
 * @src: to be checked
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
printf("%s\n", dest);
return (0);
}
