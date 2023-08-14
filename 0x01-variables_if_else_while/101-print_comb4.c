#include <stdio.h>
/**
* main - program prints combination of twi single digit
* Return: 0 (success)
*/
int main(void)
{
int n, m, l;
for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
for (l = m + 1; l < 10; l++)
{
putchar('0' + n);
putchar('0' + m);
putchar('0' + l);
if (n != 7 || m != 8 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
