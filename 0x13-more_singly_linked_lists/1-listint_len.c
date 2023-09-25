#include "lists.h"
#include <stddef.h>
/**
 *listint_len - function that returns number of elements
 *@h : head of linked list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t a = 0;
while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
