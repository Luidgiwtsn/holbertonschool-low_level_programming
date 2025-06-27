#include "main.h"
#include <stdio.h>

/**
*print_rev - function returns reverse of array
*@s: string
*
*Return: void
*/

void print_rev(char *s)
{
int a;
int size = 0;

while (*s != '\0')
{
size++;
s++;
}

s--;

for (a = size; a > 0; a--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
