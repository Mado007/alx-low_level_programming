#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *A;

A = malloc(b);
if (A == NULL)
exit(98);
return (A);
}
