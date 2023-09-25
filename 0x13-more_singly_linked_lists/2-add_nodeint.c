#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *add_nodeint - function that add node
 *@head - head of linked list and node
 *@n :data of node
 *Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->next = *head;
new->n = n;
*head = new;
return (*head);
}
