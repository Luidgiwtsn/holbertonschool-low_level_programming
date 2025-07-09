#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: variable to allocate memory for
 * Return: Pointer to the allocated memory. Exits with status 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return memory;
}
