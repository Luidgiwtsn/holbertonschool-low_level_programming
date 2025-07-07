#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *n;

if (size == 0)
return (NULL);

n = malloc(sizeof(char) * size);
if (n == NULL)
return (NULL);

while (i < size)
{
n[i] = c;
i++;
}
return (n);
}
