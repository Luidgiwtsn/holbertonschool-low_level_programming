#include <stdio.h>

/**
*main - function prints digit hexcadecimal
*
*Return: Always 0.
*/

int main(void)
{
int n;
for (n = 0 ; n <= 15 ; n++)
{
if (n < 10)
putchar('0' + n);
else
putchar('a' + n - 10);
}
putchar('\n');
return (0);
}
