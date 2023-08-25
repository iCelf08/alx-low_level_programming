#include "main.h"
/**
 *cap_string - function that capitalizes all word of a string
 *@str: pointer at string variable
 *Return: str
 */
char *cap_string(char *str)
{
int i;
int capitalizeNext = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (capitalizeNext && is_alpha(str[i]))
str[i] = to_upper(str[i]);
capitalizeNext = 0;
if (is_separator(str[i]))
capitalizeNext = 1;
}
return (str);
}
/**
 *is_alpha- function verify charater if letter
 *@c: variable to be verified
 *Return: 1 if true if else 0
*/
int is_alpha(char c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 *is_separator - function verify charater if separator of words
 *@c: verified character
 *Return: 1 if separator or if else 0
*/
int is_separator(char c)
{
return ((c == ' ' || c == '\t' || c == '\n' || c == ',' ||
c == ';' || c == '.' || c == '!' || c == '?' ||
c == '"' || c == '(' || c == ')' || c == '{' ||
c == '}') ? 1 : 0);
}
/**
 *to_upper - function to uppercase the letter
 *@c: variable char
 *Return: C
 */
char to_upper(char c)
{
if (c >= 'a' && c <= 'z')
return (c - ('a' - 'A'));
return (c);
}
