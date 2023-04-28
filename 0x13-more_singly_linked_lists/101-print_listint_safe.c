#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t sum = 0;
long int diff;

while (head)
{
diff = head - head->next;
sum++;
printf("[%p] %d\n", (void *)head, head->n);
if (diff > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}

return (sum);
}
