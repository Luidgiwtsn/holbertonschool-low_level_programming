#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatene deux chaines de caracteres,
 * en utilisant au plus n octets de s2.
 * @s1: Premiere chaine.
 * @s2: Deuxieme chaine.
 * @n: Nombre maximum d'octets a prendre de s2.
 *
 * Return: NULL en cas d'echec, sinon un pointeur vers la nouvelle chaine.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i = 0, j = 0;
unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[len1])
	{
	len1++;
	}
	while (s2[len2])
	{
	len2++;
	}
	if (n > len2)
	n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	{
	concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
	concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';

	return (concat);
}
