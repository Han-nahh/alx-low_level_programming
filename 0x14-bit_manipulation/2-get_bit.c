#include "main.h"


int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(index) * 8))
return (-1);
if ((n >> index) & 1)
return (1);
return (0);
}
