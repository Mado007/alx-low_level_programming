#include "main.h"

/**
 * set_bit -  sets the bit at index to be 1
 * @n: pointer to a num.
 * @index: index of the bit.
 * Return: 1 if worked suc or -1 if an err
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int d;

if (index > 63)
return (-1);

d = 1 << index;
*n = (*n | d);

return (1);
}
