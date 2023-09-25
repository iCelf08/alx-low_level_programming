#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all elements of listint_t
 * Return: numeber of element
 */
size_t print_listint(const listint_t *h)
{
size_t a = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
a++;
}
return(a);
}
