#include "main.h"
/**
 **string_toupper - function changes all lower case letter
 *@str: pointer at string be changed
 *to uppercase
 *Return: pointer type char
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
i++;
}
return (str);
}
