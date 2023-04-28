#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: pointer to the first node in the list.
 * @index: Position of a the node to find (starting from 0).
 * Return: pointer to the required node otherwise NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
while (head && index)

head = head->next, index--;

return (head);
}
