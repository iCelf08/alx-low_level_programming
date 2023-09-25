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
while(head != NULL)
{
free(head);
head = head->next;
}
}
