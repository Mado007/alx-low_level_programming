#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
int *arr, r = 0, t = min;

if (min > max)
return (0);
arr = malloc((max - min + 1) * sizeof(int));

if (!arr)
return (0);
while (r <= max - min)
arr[r++] = t++;
return (arr);
}
