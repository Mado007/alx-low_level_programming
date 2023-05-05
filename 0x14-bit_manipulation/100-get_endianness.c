#include "main.h"

/**
 * get_endianness - check the endannes
 * Return: 0 if big endia, 1 if little endia
 */
int get_endianness(void)
{
int d;
char *x;

d = 1;
x = (char *)&d;
return ((int)x[0]);
}
