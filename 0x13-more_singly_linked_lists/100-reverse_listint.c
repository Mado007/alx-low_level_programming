#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - - reverses a listint_t linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *preve = NULL;
listint_t *nexte = NULL;

while (*head)
{
nexte = (*head)->nexte;
(*head)->nexte = preve;
preve = *head;
*head = nexte;
}

*head = preve;

return (*head);
}
