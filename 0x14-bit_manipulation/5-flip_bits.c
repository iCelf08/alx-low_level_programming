#include "main.h"
#include <stddef.h>
/**
 *flip_bits - function returns number of bits to flip to get n to m
 *@n: number one
 *@m: number two
 *Return: number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int dif;
int count = 0;
dif = n ^ m;
while (dif)
{
if (dif & 1)
count++;
dif >>= 1;
}
return (count);
}
