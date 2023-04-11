#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: char to be initialized with
 **/
char *create_array(unsigned int size, char c)
{
char *stri;
unsigned int i;

if (size == 0)
return (NULL);
stri = malloc(sizeof(char) * size);
if (stri == NULL)
return (NULL);
i = 0;
while (i < size)
{
stri[i] = c;
i++;
}
return (stri);
}
