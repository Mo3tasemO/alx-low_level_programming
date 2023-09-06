#include<stdlib.h>
#include "main.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @c: to be checked
 * @n: to be checked
 * @size: to be checked
 * Return: Success 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *str;
str = malloc (size * sizeof(char));
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
