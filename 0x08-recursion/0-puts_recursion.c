#include "main.c"
/**
 *_puts_recursion - function that prints string followed by new line
 *@s: pointer at string
 *Return : void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_putchar(*s);
}
_puts_recursion(s + 1);
}
