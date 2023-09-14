#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - printseach array element on a new line
 *@array: array
 *@size: size of array that will be printed
 *@int: pointer to print in regularor hexadecimal
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void((*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
