#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main- programme that multiplies two numbers
 *@argc:number of arguments
 *@argv:array of arguments
 *Return:0 for success,1 for error
 */
int main(int argc, char **argv)
{
int n, m;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
n = atoi(argv[1]);
m = atoi(argv[2]);
printf("%d\n", n *m);
}
return (0);
}
