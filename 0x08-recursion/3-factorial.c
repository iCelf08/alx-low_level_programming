#include "main.h"
/**
 *factorial - function that returns factorial of given number
 *@n: given number
 *Return:(-1) for error (1) for factorial 0,(fac) for factorial result
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
