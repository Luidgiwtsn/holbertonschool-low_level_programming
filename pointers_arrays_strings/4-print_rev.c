#include "main.h"
#include <stdio.h>

/**
*reverse_array - function returns reverse of array
*@s: string
*
*Return: void
*/

void print_rev(char *s)
{
int a;
int size = 0;
 
//Compte le nombre de charactere du string a la posiiton *s de la memoire jusqua la fin (tableaux) \0
//temps que la condition *s != '\0' nest pas atteint fait ce qui est dans le while
while (*s != '\0')
{
//augemente la taille de 1 dans le tableau(memoire
size++;
//met le pointeur une place en avant dans la memoire
s++;
}

//remet le pointeur une position en arriere pour montrer sur le character avant le \0 (qui est le dernier character du string)
s--;

//declare a egale la taille du string, regarde si a nest pas egale a 0, et apres diminue a de 1
//tant que a nest pas 0, linterieur du for va etre appliquer
for (a = size; a > 0; a--)
{
  //met le character qui est a la position *s dans la memoire
_putchar(*s);
//recule le pointeur dune place en arriere pour pouvoir pointer sur le prochain character dans la prochaine boucle
s--;
}
_putchar('\n');
}
