#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

int _strlen(char *s)

{
int c;

for(c= 0; s[c] != '\0'; c++);



return(c);
}
