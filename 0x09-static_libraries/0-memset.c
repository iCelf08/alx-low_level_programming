#include "main.h"
/**
 **_memset - function that fills a memory with a constant byte
 *@s: pointer at memory adress to be filled
 *@b: constant byte
 *@n: number of byte
 *Return: pointer s at adress
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
