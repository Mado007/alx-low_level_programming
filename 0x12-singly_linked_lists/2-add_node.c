#include <stdlib.h>
#include "lists.h"
/**
 * _strlen - get length all the string
 * @s: string
 * Return: length of the str
 */
int _strlen(const char *s)
{
int d;

for (d = 0; s[d]; d++)
		;
return (d);
}
/**
 * add_node - add new node to the list
 * @head: current place the list
 * @str: string to add to the head
 * Return: point posit in list
 */
list_t *add_node(list_t **head, const char *str)
{
int d, len;
char *content;
list_t *new;

if (str == NULL || head == NULL)
return (NULL);
len = _strlen(str);
new = *head;
content = malloc((len + 1) * sizeof(char));
if (content == NULL)
return (NULL);
for (d = 0; str[d]; d++)
content[d] = str[d];
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(content);
return (NULL);
}
new->str = content;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
