#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
while (head)
{
listint_t *next = head->next;

free(head);
head = next;
}
}
