#include"main.h"
/**
* _islower - chech if c is lowercase character
* @c: is the char to be checked
* Return: Always 0 (Success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
