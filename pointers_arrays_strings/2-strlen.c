#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

int _strlen(char *s)

{
int c = 0;

while (s[c] != '\0');

c++;

return (c);
}
