#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
*read_textfile - function reads text and prints it to posix STO
*@filename: file name input
*@letters: letters to print
*Return: number of letters in success , 0 if failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
