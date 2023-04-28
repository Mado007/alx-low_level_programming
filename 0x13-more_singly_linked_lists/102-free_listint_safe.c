#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
size_t free_listint_safe(listint_t **h)
{
size_t lin = 0;
int tif;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
tif = *h - (*h)->next;
if (tif > 0)
{
temp = (*h)->next;
*h = temp;
lin++;
}
else
{
*h = NULL;
lin++;
break;
}
}

*h = NULL;

return (lin);
}
