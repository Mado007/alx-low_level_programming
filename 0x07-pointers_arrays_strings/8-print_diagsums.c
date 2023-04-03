#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints sums of two int
 * @a: this is a pointer
 *
 * @size: size of square
 *
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + (size * i + i));
sum2 += *(a + (size * i + size - 1 - i));
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
