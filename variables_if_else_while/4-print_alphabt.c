#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)

if (n != 'e' && n != 'q')

putchar(n);

putchar('\n');

return (0);
}
