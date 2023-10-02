#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 *read_textfile: function reads text and prints it to posix STO
 *@filename: file name input
 *@letters: letters to print
 *Return: number of letters in success , 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i;
char *buffer;
FILE *pf;
buffer = malloc(letters * sizeof(char));
if(buffer == NULL)
return(0);
pf = fopen(filename, "r");
if(pf == NULL)    
return(0);
while(fgets(buffer, letters, pf) != NULL)
{
for(i = 0; buffer[i] != '\0'; i++)
_putchar(buffer[i]);
}
fclose(pf);
free(buffer);
return(letters);
}
