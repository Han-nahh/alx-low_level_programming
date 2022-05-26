#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m = 0;

if (index > (sizeof(index) * 8))
return (-1);

m = (1 << index);
*n = *n & ~m;
return (1);
}
