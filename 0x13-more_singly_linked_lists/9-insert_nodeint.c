#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node to the list.
 * @head: pointer to the list first node pointer.
 * @idx: the index to inserted in the new node.
 * @n: the data value of the new node
 *
 * Return: Address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int d = 0;

if (*head == NULL && idx != 0)
return (NULL);
if (idx != 0)
{
temp = *head;
for (; d < idx - 1 && temp != NULL; d++)
temp = temp->next;
if (temp == NULL)
return (NULL);
}
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
