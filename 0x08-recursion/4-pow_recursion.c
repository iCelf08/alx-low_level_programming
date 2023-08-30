#include "main.h"
/**
 *_pow_recursion - function that raise x to power of y
 *@x: variable
 *@y: power of
 *Return: -1 for error, int result for success
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (_pow_recursion(x, y + 1) / x);
}
else
{
return (_pow_recursion(x, y - 1) * x);
}
}
