#include <stdio.h>
/**
* main - program prints combination of twi single digit
* Return: 0 (success)
*/
int main(void)
{
int n, m, l;
for (n = 0; n < 99; n++)
{
for (m = 0; m < 99; m++)
{
putchar('0' + (n / 10));
putchar('0' + (n % 10));
putchar(' ');
putchar('0' + (j / 10));
putchar('0' + (j % 10));
if (n != 98 || m != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
