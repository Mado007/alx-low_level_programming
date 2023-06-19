#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be fill
 * @b: char to copy
 * @n: number of tim to copy ds
 *
 * Return: point to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
