#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the begining
 * @head: pointer to the head pointer
 * @n: the int value of the node
 * Return: pointer to the created node otherwise NULL␓
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tp;

tp = malloc(sizeof(listint_t));
if (tp == NULL)
return (NULL);

tp->n = n;
tp->next = *head;
*head = tp;
return (*head);
}
