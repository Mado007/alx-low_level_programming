#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer
 **/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i = 0;

if (size == 0)
return (NULL);

str = (char *)malloc(size * sizeof(char));

if (str == 0)
{
return (NULL);
}

else
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
