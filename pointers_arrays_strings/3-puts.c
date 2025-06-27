#include <stdio.h>
#include "main.h"

/**
*_puts - functions prints string
* @str: The string to reverse
*/

void _puts(char *str)
{ 
  while (*str != '\0')
	  {
	    _putchar(*str);
	    str++;
	  }
	_putchar('\n');
}
