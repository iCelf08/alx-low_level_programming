#include "function_pointers.h"
/** print_name- Function that prints name
 *@name: pointer at name string
 *f:pointer to return the printed name
 *Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
f(name);
}
