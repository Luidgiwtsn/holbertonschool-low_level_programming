#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: variable
 *
 * Return: 0 - upper OR 1 - lower
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
