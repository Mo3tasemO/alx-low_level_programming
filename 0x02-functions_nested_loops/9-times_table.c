 #include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int n, m, prod;
for (m = 0; m <= 9; m++)
_putchar(48);
{
for (n = 1; n <= 9; n++)
{
_putchar(',');
_putchar(' ');
prod = m * n;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
