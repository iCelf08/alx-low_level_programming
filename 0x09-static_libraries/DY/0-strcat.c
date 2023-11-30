#include "main.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: pointer type char
 *@src: pointer type char
 *Return: 'dest'
 */
char *_strcat(char *dest, char *src)
{
char *app = dest;
while (*app != '\0')
{
app++;
}
while (*src != '\0')
{
*app = *src;
app++;
src++;
}
*app = '\0';
return (dest);
}
