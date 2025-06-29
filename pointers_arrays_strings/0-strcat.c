#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: char pointer.
 */

char *_strcat(char *dest, char *src)

{
int d, s;

d = 0;
s = 0;

while (dest[d] != '\0')
d++;

while (src[s] != '\0')
{
dest[d] = src[s];
s++;
d++;
}

dest[d] = '\0';

return (dest);
}
