#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creer un tableau d'entier en allant de min a max
 * @min: valeur minimal du tableau
 * @max: valeur maximal du tableau
 *
 * Return: pointeur vers le tableau ou NULL si erreur
 */
int *array_range(int min, int max)
{
int i;
int *a;
if (min > max)
return (NULL);
a = malloc(sizeof(int) * (max - min + 1));
if (a == NULL)
return (NULL);
for (i = 0; min <= max; min++, i++)
a[i] = min;
return (a);
}
