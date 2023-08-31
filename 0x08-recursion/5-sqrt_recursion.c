#include "main.h"
/**
 *root_help - function support find the right gess of root
 *@num: input num
 *@root: gues root
 *Return: root
 */
int root_help(int num, int root)
{
if ((root * root) > num)
{
return (-1);
}
else if ((root * root) == num)
{
return (root);
}
else
{
return (root_help(num, root + 1));
}
}
/**
 *_sqrt_recursion - function that return square root of a number
 *@n: integer input
 *Return:-1 for error, integer  for sqr root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
return (root_help(n, 0));
}
