#include"main.h"
/**
* print_alphabet - print all alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
