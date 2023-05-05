#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit_pos;

if (n == 0 && index < 64)
return (0);

for (bit_pos = 0; bit_pos <= 63; n >>= 1, bit_pos++)
{
if (index == bit_pos)
{
return (n & 1);
}
}

return (-1);
}
