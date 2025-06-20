#include "main.h"

/**
* print_sign - returns 1 and prints + if n>0 : return -1 or 0
*
* @n: sign character
*
* Return: 1 for letters. Returns 0 otherwise
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
}
