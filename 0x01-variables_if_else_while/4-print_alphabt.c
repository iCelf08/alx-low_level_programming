#include <stdio.h>
/**
*main-program that prints lowcase letters except 'q' and 'e'
*Return: 0 (sucsses)
*/
int main(void)
{
char L;
for (L = 'a'; L <= 'z'; L++)
{
if (L != 'q' && L != 'e')
{
putchar(L);
}
}
putchar('\n');
return (0);
}
