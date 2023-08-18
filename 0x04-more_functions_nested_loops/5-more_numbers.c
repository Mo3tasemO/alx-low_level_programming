#include"main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
while (i < 10)
{
while (j <= 14)
{
_putchar(j);
j++;
}
_putchar(i);
}
_putchar('\n');
return (0);
}
