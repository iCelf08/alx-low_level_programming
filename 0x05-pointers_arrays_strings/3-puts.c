#include "main.h"
/**
*_puts - function that prints a string followed by new line
*@str: pointer value
*/
void _puts(char *str)
{
char c;
c = *str;
for (; *str != '\0'; str++)
{
_putchar(c);
}
_putchar('\n');
}
