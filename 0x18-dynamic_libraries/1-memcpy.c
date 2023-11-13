#include "main.h"
/**
 **_memcpy - function that copies memory area
 *@dest: destination pointer
 *@src: source pointer
 *@n: number of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *val = dest;
for (i = 0; i < n; i++)
{
*val = *src;
val++;
src++;
}
return (dest);
}
