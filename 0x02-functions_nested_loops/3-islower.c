#include "main"
/**
*_islower -program that check for lowercase letter
*Return: 1 if c is lowercase, 0 otherwise
*@c: the caracter to be checked
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
