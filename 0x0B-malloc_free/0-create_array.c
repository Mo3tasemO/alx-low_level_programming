#include<stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @c: to be checked
 * @size: to be checked
 * Return: Success 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *str;
str = malloc(size * sizeof(char));
if (size == 0 || str == NULL)
{
return (NULL);
}
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
