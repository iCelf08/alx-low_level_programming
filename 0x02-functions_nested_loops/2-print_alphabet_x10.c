#include "main.h"
/**
* print_alphabet -program tha prints the alphabt
*return: 0 success
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
/**
*print_alphabet_x10 -program that prints the alphabets 10 times
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
_putchar('\n');
}
