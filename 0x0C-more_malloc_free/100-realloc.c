#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *clone, *relloc;
unsigned int o;

if (ptr != NULL)
clone = ptr;
else
{ return (malloc(new_size)); }
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{ free(ptr);
return (0); }
relloc = malloc(new_size);
if (relloc == NULL)
return (0);
for (o = 0; o < (old_size || o < new_size); o++)
{
*(relloc + o) = clone[o];
}
free(ptr);
return (relloc);
}
