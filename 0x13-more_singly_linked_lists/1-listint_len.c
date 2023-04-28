#include "lists.h"

/**
 * listint_len - count the number of elements.
 * @h: point node in the list
 * Return: the size of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
const listint_t *tp;
unsigned int cnr = 0;

tp = h;
while (tp)
{
cnr++;
tp = tp->next;
}
return (cnr);
}
