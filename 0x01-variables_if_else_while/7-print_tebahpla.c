#include <stdio.h>
/**
*main-program that prints lower case letters
*Return:0 (success)
*/
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
