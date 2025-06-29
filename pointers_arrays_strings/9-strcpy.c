#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - Entry point
 *
 * @dest: 'varaibles'
 * @src: 'variables2'
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';


return (dest);
}
