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
while (j < 9)
{
while (i <= 14)
{
if (i > 10)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
j++;
j = 0;
}
}
