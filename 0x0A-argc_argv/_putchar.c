#include <stdio.h>
#include "main.h"
/**
 *_putchar - writes the character c to stdout
 *@c:the character to be written
 *Return: on success 1, On error -1
 */
int _putchar(char c)
{
return (write(1,&c,1));
}
