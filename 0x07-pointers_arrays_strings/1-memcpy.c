#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: to be checked
 * @src: to be checked
 * @n: to be checked
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
