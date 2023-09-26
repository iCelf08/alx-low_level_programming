#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *pop_listint - function that delets the headnode of a list and return the
 *head node ddata
 *@head: pointer to linked list pointer
 *Return: n in success 0 in empty case
 */
int pop_listint(listint_t **head)
{
listint_t *ret;
int data;
if (*head == NULL)
return (0);
ret = *head;
data = ret->n;
*head = (*head)->next;
free(ret);
return (data);
}
