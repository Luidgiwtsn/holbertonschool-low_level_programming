#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - function prints alphabetly
*
*Return: Always 0.
*/

int main(void)
{
char n = 'a';
while (n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
