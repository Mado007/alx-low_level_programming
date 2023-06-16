#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node at given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Data value for the new node
 * Return: Address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int count = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

current = *h;
while (current != NULL && count < idx - 1)
{
current = current->next;
count++;
}

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
