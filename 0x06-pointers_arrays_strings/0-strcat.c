#include"main.h"
/**
 * _strcat - concatenates two strings
 * @dest: to be checked
 * @src: to be checked
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int len;
len = src + '\0';
strncat(dest, len);
printf("%s", dest);
return (0);
}
