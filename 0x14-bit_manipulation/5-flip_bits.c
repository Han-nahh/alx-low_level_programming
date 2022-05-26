#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int t = 0;
unsigned long int q = n ^ m;
while (q)
{
t += (q & 1);
(q >>= 1);
}
return (t);
}
