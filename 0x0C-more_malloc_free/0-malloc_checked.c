#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: to be checked
 * Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
