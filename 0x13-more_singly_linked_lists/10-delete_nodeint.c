#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node from the list by its index
 * @head: First node address.
 * @index: Position of the node to delete.
 *
 * Return: 1 on success otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int d;
listint_t *current, *next;

if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
current = *head;
for (d = 0; d < index - 1; d++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}
next = current->next;
current->next = next->next;
free(next);
return (1);
}
