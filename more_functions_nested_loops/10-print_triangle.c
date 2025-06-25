#include "main.h"

/**
* print_triangle - Entry point
*
* @size: variable
*
* Return: void
*/

void print_triangle(int size)
{
int a, b, c, d;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
d = size - a;
for (b = 1; b <= d; b++)
{
_putchar(' ');
}
for (c = 1; c <= a; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
