#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - for each element of array executes a function
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;

if (!array || !action)
return;

for (x = 0; x < size; x++)
action(array[x]);
}
