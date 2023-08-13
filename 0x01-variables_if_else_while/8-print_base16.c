#include <stdio.h>
/**
 *main- program that printf numbers in hexadeimal in lower case
 *Return:0 (success)
 */
int main(void)
{int n;
for (n = 0; n = 16; n++)
{
if (n < 10)
{
putchar('0' + n);
}
else
{
putchar('a', (n - 10));
}
putchar('\n');
return (0);
}
