#include "main.h"
#include <stdio.h>

/**
*print_line - Write a function that draws a straight line in the terminal.
*@n: Integer amount of _
*/

void print_line(int n)
{
int a;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
