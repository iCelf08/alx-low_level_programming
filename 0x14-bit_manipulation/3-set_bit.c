#include "main.h"
#include <stddef.h>
/**
 *set_bit - function sets the value of bit to one at given index
 *@n: input data
 *@index: bit to change
 *Return: (1) in success, (-1) error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (n == NULL)
return(-1);
if (index > 63)
return (-1);
*n = *n | mask;
return (1);
}
