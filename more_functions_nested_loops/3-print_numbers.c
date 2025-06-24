#include "main.h"
#include <stdio.h>

/**
* print_numbers - function that prints the numbers from 0-9
* Return: 1 if digit and 0 if anything else
*/

void print_numbers(void)
{
char c;
 for (c = 0; c <= 9; c++)
{
 putchar(c + '0');
}
 putchar('\n');
}
