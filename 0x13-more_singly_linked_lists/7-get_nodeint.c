#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *get_nodeint_at_index - function that returns nth node of list
 *@head: pointer at list head
 *@@index: index of node
 *Return: nth node or Null if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *this_node;
unsigned int i;
this_node = head;
for(i = 0; i == index && this_node != NULL; i++)
{
this_node = this_node->next;
}
return(this_node);
}
