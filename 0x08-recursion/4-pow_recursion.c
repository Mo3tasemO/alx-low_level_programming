#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: to be checked
 * @y: to be checked
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
return (_pow_recursion(x, y));
return (x);
}
