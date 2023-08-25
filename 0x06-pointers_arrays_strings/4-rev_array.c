#include "main.h"
/**
 *reverse_array - function reverses content of an array
 *@a: pointer at array
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
int *rev = a;
int temp;
int *end = a + n - 1;
while (rev < end)
{
temp = *rev;
*rev = *end;
*end = temp;
rev++;
end--;
}
}
