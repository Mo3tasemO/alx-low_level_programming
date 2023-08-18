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
while (i < 9)
{
while (j <= 14)
{
if (j > 10)
_putchar(j / 10 + '0');
_putchar(a % 10 + '0');
j++;
}
_putchar('\n');
i++;
i = 0;
}
}
