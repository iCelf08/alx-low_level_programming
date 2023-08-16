#include "main.h"
/**
* print_alphabet_x10 -program tha prints the alphabets 10 times
*return: 0 success
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
_putchar('\n');
}
