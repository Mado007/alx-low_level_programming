#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a linked list
* @h: the first node of the linked list
* Return: the number of nodes printed.
*/

size_t print_list(const list_t *h)
{
int count = 0;

while (h)
{
printf("[%d] %s\n",
h->str ? h->len : 0,
h->str ? h->str : "(nil)");
h = h->next;
count++;
}

return (count);
}
