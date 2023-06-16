#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete (starting from 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;

if (current == NULL)
return (-1);

if (index == 0)
{
if (current->next == NULL)
{
*head = NULL;
free(current);
return (1);
}
*head = current->next;
(*head)->prev = NULL;
free(current);
return (1);
}

while (current != NULL && count < index)
{
current = current->next;
count++;
}

if (current == NULL)
return (-1);

if (current->next != NULL)
current->next->prev = current->prev;

if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}
