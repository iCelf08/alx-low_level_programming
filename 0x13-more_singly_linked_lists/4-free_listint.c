#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *free_listint - function that frees a list
 *@head: poiter to head of list
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while(head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
