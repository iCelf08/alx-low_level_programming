#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *sum_listint - function that retuns the sum of data of a list
 *@head: pointer head node
 *Return: sum in success, 0 in empty case
 */
int sum_listint(listint_t *head)
{
int i;
int sum = 0;
listint_t *list;
list = head;
if (head == NULL)
return (0);
while (list != NULL)
{
sum += list->n;
list = list->n;
}
return (sum);
}
