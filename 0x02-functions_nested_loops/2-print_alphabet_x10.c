#include"main.h"
/**
* function print_alphabet_x10 - print_alphabet_x10 times in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
	_putchar(ch);
	ch++;
}
_putchar('\n');
i++;
}
}
