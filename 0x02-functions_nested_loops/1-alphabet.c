#include"main.h"
/**
* main - print_alphabet
* is written by mbah
* Return: 0
*/
int main(void)
{
print_alphabet();
char ch = 'a';
while(ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
return (0);
}
