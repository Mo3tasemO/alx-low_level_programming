#include"main.h"
#include<string.h>
/**
 * _strcmp - compares two strings.
 * @s1: to be checked
 * @s2: to be checked
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int len = strcmp(*s1, *s2);
if (len ==0)
return 0;
else
return 1;
}
