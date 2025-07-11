#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 * locates a character in a string.
 * @s: varable1
 * @c: variable2
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}
