#include <stdio.h>
/**
 *main-program that prints lower case letters than upper case
 *Return:0 (success)
 */
int main(void)
{
char ll;
char up;
for (ll = 'a'; ll <= 'z'; ll++)
{
putchar(ll);
}
for (up = 'A'; up <= 'Z'; up++)
{
putchar(up);
}
putchar('\n');
return (0);
}
