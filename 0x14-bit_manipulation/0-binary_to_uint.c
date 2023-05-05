#include "main.h"

/**
 * _stoin - converts characters to integers
 * @c: char to be converted
 * Return: converted integer
 */

unsigned int _stoin(char c)
{
return ((unsigned int) c - '0');
}

/**
 * _strlenh - calculate the length of the string
 * @s: input string
 * Return: length of the string
 */

unsigned int _strlenh(const char *s)
{
unsigned int d;

for (d = 0; s[d]; d++)
;
return (d);
}

/**
 * binary_to_uint - convert a string of 1s and 0's to decimal numbers
 * @b: string to be converted
 * Return: unsigned decimal number we want
 */
unsigned int binary_to_uint(const char *b)
{
int d;
unsigned int result, temp, exponent;

if (!b)
return (0);
result = temp = 0;
exponent = 1;
for (d = _strlenh(b) - 1; b[d]; d--, exponent *= 2)
{
if (b[d] != '0' && b[d] != '1')
return (0);
temp = _stoin(b[d]);
result += temp * exponent;
}
return (result);
}
