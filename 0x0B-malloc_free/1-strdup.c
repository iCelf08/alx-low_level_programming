#include <stdlib.h>
/**
 *_strdup - function thatcopy a string
 *and return a pointer to the newly allocated space
 *@str: string to be  copied
 *Return: str for success,NULL for Error
 */
char *_strdup(char *str)
{
unsigned int i;
unsigned int len = 0;
char *dup = NULL;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup = malloc((len + 1) * sizeof(char));
if (dup != NULL)
{
for (i = 0; i < len; i++)
dup[i] = str[i];
}
return (dup);
}
