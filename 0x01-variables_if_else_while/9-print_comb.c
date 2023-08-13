#include<stdio.h>
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i = 48;
char ch = 'a';
while (i <= 57)
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
