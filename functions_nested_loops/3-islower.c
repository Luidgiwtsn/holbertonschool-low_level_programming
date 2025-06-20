#include "main.h"

/**
*_islower-function checks c islower or not
*
*the charscters is input
* Return: 1 for lowercase. 0 for the rest.
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
