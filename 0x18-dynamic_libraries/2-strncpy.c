#include "main.h"
/**
* *_strncpy - function that copies string
 *@des:  pointer at dest
 *@src:pointer at src
 *@n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *app = dest;
while (*src != '\0' && n > 0)
{
*app = *src;
app++;
src++;
n--;
}
while (n > 0)
{
*app = '\0';
app++;
n--;
}
return (dest);
}
