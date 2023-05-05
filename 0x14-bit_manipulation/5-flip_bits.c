#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * to move from a number to another
 * @n: base given number 1
 * @m: number to be transformed to 2
 * Return: num of bits transformations
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int d, result;

result = 0;
for (d = 8 * sizeof(n) - 1; d >= 0; d--)
if (((n ^ m) >> d) & 1)
result++;
return (result);
}
