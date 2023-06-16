#include "lists.h"

/**
 * sum_dlistint - Return the sum of the data of linked list
 * @head: Pointer the head of the list
 * Return: Sum of the data values or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
