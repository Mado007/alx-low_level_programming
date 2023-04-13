#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int e;
char *memory;

if (nmemb == 0 || size == 0)
return (NULL);
memory = malloc(nmemb * size);
if (memory == NULL)
return (NULL);
for (e = 0; e < nmemb * size; e++)
*(memory + e) = 0;
return ((void *)memory);
}
