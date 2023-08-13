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
i++;
}
while ( ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
