#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string1.
 * @s2: string2.
 * Return: pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
	{
		for (; s1[s1_len]; s1_len++)
			;
	}
	if (s2 != NULL)
	{
		for (; s2[s2_len]; s2_len++)
			;
	}

	new = malloc(s1_len + s2_len + 1);
		if (new == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		new[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
	{
		new[s1_len + i] = s2[i];
	}
	new[s1_len + s2_len] = '\0';
		return (new);
}
