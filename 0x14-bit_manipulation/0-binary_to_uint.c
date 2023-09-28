#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint -  function that converts binary number to an unsigned
 *int
 *@b:string of 0-1 chars
 *Return: converted number inn success,0if other than 1 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int val = 0;
unsigned int len = 0;
if (b == NULL)
return (0);
for (i = 0; b[i] != ('\0'); i++)
{
if (b[i] != '1' && b[i] != '0')
return (0);
len++;
}
for (i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
val += (1 << (len - 1 - i));
}
return (val);
}
