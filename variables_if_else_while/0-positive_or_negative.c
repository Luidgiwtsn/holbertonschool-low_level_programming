#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - function checks random rumber positive or zero
*
*Return: Always 0.
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is POSITIVE\n", n);
}
else if (n < 0)
{
printf("%d is NEGATIVE\n", n);
}
else
{
printf("%d is ZERO\n", n);
}
return (0);
}
