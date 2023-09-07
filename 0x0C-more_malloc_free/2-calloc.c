#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: to be checked
 * @size: the size of the memory to print
 * Return: Success 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
l = nmemb * size;
p = malloc(l);
if (p == NULL)
return (NULL);
while (i < l)
{
p[i] = 0;
i++;
}
return (p);
}
