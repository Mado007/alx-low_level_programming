#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: pointer to the function that detects the integer
 *
 * Return: the index of the integer in the array
 * only if @cmp returns non-zero value otherwise returns -1.
 * if array or cmp is null then returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (array && cmp)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
{
return (x);
}
}
}
return (-1);
}
