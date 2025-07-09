#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau et l'initialise à zéro
 * @nmemb: nombre d'éléments
 * @size: taille de chaque élément
 *
 * Return: pointeur vers la mémoire allouée, ou NULL en cas d'échec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = 0;
	}
	return (s);
}
