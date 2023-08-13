#include <stdio.h>
/**
*main- program prints combination of twi single digit
*Retunr: 0 (sucsses)
*/
int main(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar('0' + n);
putchar('0' + m);
if (n != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
