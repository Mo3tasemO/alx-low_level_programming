#include"main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: to be checked
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] == 2 && a[i] == 3 && a[i] == 4 && a[i] == 5 && a[i] == 6)
_putchar(' ');
continue;
}
}
