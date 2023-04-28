#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
size_t counter = 0;

if (!h)
return (0);
while (h)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
