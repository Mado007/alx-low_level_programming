#include "main.h"

/**
 * clear_bit - sets the value of a bit to be 0 at the given index
 * @n: pointer to a number
 * @index: index of the bit.
 * Return: 1 if worked suc or -1 if an err
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int o;

if (index > 63)
return (-1);

o = 1 << index;

if (*n & o)
*n ^= o;

return (1);
}
