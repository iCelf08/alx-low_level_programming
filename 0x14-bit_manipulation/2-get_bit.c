#include "main.h"
/**
 *get_bit - function returns the value of a bit at a given index
 *@n: input number
 *@index: index of bit to be returned
 *Return: value bit at index at success -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return ((n >> index) & 1);
}
