#include "main.h"
/**
 **_strncat - function that concatenates two strings
 *@dest:destination pointer
 *@src: src pointer
 *@n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *app = dest;
while (*app != '\0')
{
app++;
}
while (*src != '\0' && n > 0)
{
*app = *src;
app++;
src++;
n--;
}
*app = '\0';
return (dest);
}
