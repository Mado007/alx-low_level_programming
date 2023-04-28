#include <stdlib.h>
#include "lists.h"


/**
 * pop_listint - Delete first element of a singly linked list.
 * @head: Pointer to a lt.
 * Return: Integer if sucss.
 **/
int pop_listint(listint_t **head)
{
listint_t *node;
int my_value;

if (!head || !*head)
return (0);

node = *head;
my_value = node->n;
*head = node->next;
free(node);
return (my_value);
}
