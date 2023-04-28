#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;

if (!head)
return (NULL);
node = malloc(sizeof(list_t));
if (!node)
return (NULL);

node->str = strdup(str);
if (!node->str)
{
free(node);
return (NULL);
}

node->len = strlen(str);
if (!*head)
{
*head = node;
}
else
{
list_t *h = *head;

while (h->next)
h = h->next;
h->next = node;
}

return (node);
}
