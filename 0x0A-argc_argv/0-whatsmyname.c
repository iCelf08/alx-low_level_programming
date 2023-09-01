#include <stdio.h>
#include <stdlib.h>
/**
*main - program print's it's name
*@argc:number arguments,size of argv array
*@argv:array containing program commande line arguments
*Return: 0 success
*/
int main(int argc, char **argv)
{
argc = 1;
printf("%s\n", argv[argc - 1]);
return (0);
}
